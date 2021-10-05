#include<bits/stdc++.h>
using namespace std;
//git push
enum person_type {tstudent,tteacher};
const int MAX=1000;

class Person
{
private:
    string name;
    int age;
    static int n;
    static Person* arr[];
public:
    virtual void get_data()
    {
        cout<<"Enter Name :";
        cin>>name;
        cout<<"Enter Age :";
        cin>>age;
    }
    virtual void put_data()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
    }
    virtual person_type get_type();
    static void add_member();
    static void display();
    static void read();
    static void write();
};
int Person::n;
Person* Person::arr[MAX];

class Student:public Person
{
private:
    string department;
    string type;
    int id;
public:
    void get_data()
    {

        Person::get_data();
        cout<<"Enter type: ";
        cin>>type;
        cout<<"Enter Department :";
        cin>>department;
        cout<<"Enter ID :";
        cin>>id;
    }
    void put_data()
    {
        Person::put_data();
        cout<<"Type: "<<type<<endl;
        cout<<"Department :"<<department<<endl;
        cout<<"ID :"<<id<<endl;
    }
};
class Teacher:public Person
{
private:
    float salary;
    string email;
public:
    void get_data()
    {
        Person::get_data();
        cout<<"Enter email: ";
        cin>>email;
        cout<<"Enter Salary :";
        cin>>salary;
    }
    void put_data()
    {
        Person::put_data();
        cout<<"Email :"<<email<<endl;
        cout<<"Salary :"<<salary<<endl;
    }
};

void Person::add_member()
{
    char c;
    cout <<"'s' to add a Student"
         "\n't' to add a Teacher"
         "\n\nEnter your choice: ";
    cin >> c;
    switch(c)
    {
    case 's':
        arr[n] = new Student;
        break;
    case 't':
        arr[n] = new Teacher;
        break;
    default:
        cout << "\nMember type not identified......\n";
        return;
    }

    arr[n++]->get_data();
}

void Person::display()
{
    int j;
    for(j=0; j<n; j++)
    {
        cout<<j+1;
        switch(arr[j]->get_type())
        {
        case tstudent:
            cout<<" Type Student\n";
            break;
        case tteacher:
            cout<<" Type Teacher\n";
        }

        arr[j]->put_data();
        cout<<endl;
    }
}
person_type Person::get_type()
{
    if( typeid(*this) == typeid(Student) )
        return tstudent;
    else if( typeid(*this)==typeid(Teacher) )
        return tteacher;
    else
    {
        cout << "\nUnknown member type";
        exit(1);
    }
    return tstudent;
}
void Person::write()
{
    int size;
    cout << "Writing " << n << " members.\n";
    ofstream out;
    person_type mt;
    out.open("UNI.txt", ios::trunc | ios::binary);
    if(!out)
    {
        cout << "\nError open file\n";
        return;
    }
    for(int j=0; j<n; j++)
    {
        mt = arr[j]->get_type();
        out.write((char*)&mt, sizeof(mt));
        switch(mt)
        {
        case tstudent:
            size=sizeof(Student);
            break;
        case tteacher:
            size=sizeof(Teacher);
            break;
        }
        out.write((char*)(arr[j]),size);
        if(!out)
        {
            cout << "\nCannot write to file\n";
            return;
        }
    }
}
void Person::read()
{
    int size;
    ifstream in;
    person_type mt;
    in.open("UNI.txt", ios::binary);
    if(!in)
    {
        cout << "\nError opening file\n";
        return;
    }
    n = 0;
    while(true)
    {
        in.read((char*)&mt, sizeof(mt) );
        if(in.eof())
            break;
        if(!in)
        {
            cout << "\nCannot read from file\n";
            return;
        }
        switch(mt)
        {
        case tstudent:
            arr[n] = new Student;
            size=sizeof(Student);
            break;
        case tteacher:
            arr[n] = new Teacher;
            size=sizeof(Teacher);
            break;
        default:
            cout << "\nUnidentified type!!!!!!\n";
            return;
        }
        in.read((char*)arr[n],size);
        if(!in)
        {
            cout << "\nCannot read data from file\n";
            return;
        }
        n++;
    }
    cout << "Reading from file " << n << " members\n";
}
int main()
{
    char c;
    while(true)
    {
        cout <<"The choices are--------------\n"
              "'a' to add data for members"
             "\n'd' to display data for all members"
             "\n'w' to write all members data to file"
             "\n'r' to read all members data from file"
             "\n'e' to exit"
             "\nEnter your choice : ";
        cin>>c;
        switch(c)
        {
        case 'a':
            Person::add_member();
            break;
        case 'd':
            Person::display();
            break;
        case 'w':
            Person::write();
            break;
        case 'r':
            Person::read();
            break;
        case 'e':
            exit(0);
        default:
            cout << "\nUnknown command";
        }
    }
}
