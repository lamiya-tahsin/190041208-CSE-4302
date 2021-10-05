#include<bits/stdc++.h>
using namespace std;

class Staff{
protected:
    int code;
    string name;
public:
    void get_data()
    {
        cout<<"Enter code: ";
        cin>>code;
        getchar();
        cout<<"Enter name: ";
        getline(cin,name);
    }
    void sset_data(int c,string s)
    {
        code=c;
        name=s;
    }
    void about()
    {
        cout<<"About Staff:"<<endl;
    }
    void show_data()
    {
        about();
        cout<<"name"<<"\t\t"<<"code"<<"\t\t"<<endl;
        cout<<name<<"\t\t"<<code<<"\t\t"<<endl;
    }
    void whoami()
    {
        cout<<"I am a Staff"<<endl;
    }
};

class Teacher: public Staff{
protected:
    string subject;
    string publication;
public:
    void get_data()
    {
        Staff::get_data();
        cout<<"Enter subject name: ";
        getline(cin,subject);
        cout<<"Enter name of publication: ";
       getline(cin,publication);
    }
    void tset_data(string s,string p)
    {
        subject=s;
        publication=p;
    }
    void about()
    {
        cout<<"About Teacher:"<<endl;
    }
    void show_data()
    {
        about();
         cout<<"name"<<"\t\t"<<"code"<<"\t\t"<<"subject\t\t\t\t"<<"publication"<<endl;
        cout<<name<<"\t\t"<<code<<"\t\t"<<subject<<"\t\t"<<publication<<endl;
    }
    void whoami()
    {
        cout<<"I am a Teacher"<<endl;
       // show_data();
    }
};

class Officer:public Staff{
protected:
    string grade;
public:
    void get_data()
    {
        Staff::get_data();
        cout<<"Enter grade: ";
        cin>>grade;
    }
    void oset_data(string g)
    {
        grade=g;
    }
    void about()
    {
        cout<<"About Officer:"<<endl;
    }
    void show_data()
    {
        about();
         cout<<"name"<<"\t\t\t"<<"code"<<"\t\t"<<"grade"<<endl;
        cout<<name<<"\t\t"<<code<<"\t\t"<<grade<<endl;
    }
    void whoami()
    {
        cout<<"I am an Officer"<<endl;
        //show_data();
    }
};

class Typist: public Staff{
protected:
    double speed;

public:
    void get_data()
    {
        Staff::get_data();
        cout<<"Enter speed: ";
        cin>>speed;
    }
    void tyset_data(double s)
    {
        speed=s;
    }
    void about()
    {
        cout<<"About Typist:"<<endl;
    }
    void show_data()
    {
        cout<<"name"<<"\t\t\t"<<"code"<<"\t\t"<<"speed"<<endl;
        cout<<name<<"\t\t"<<code<<"\t\t"<<speed<<endl;
    }
    void whoami()
    {
        cout<<"I am a Typist"<<endl;
        //show_data();
    }
};

class Casual: public Typist{
protected:
    int wage;
public:
    void get_data()
    {
        Typist::get_data();
        cout<<"Enter wage: ";
        cin>>wage;
    }
    void ctset_data(int w)
    {
        wage=w;
    }
    void about()
    {
        cout<<"About Casual Typist:"<<endl;
    }
    void show_data()
    {
        about();
        cout<<"name"<<"\t\t\t"<<"code"<<"\t\t"<<"speed\t\t"<<"wage"<<endl;
        cout<<name<<"\t\t"<<code<<"\t\t"<<speed<<"\t\t"<<wage<<endl;
    }
    void whoami()
    {
        cout<<"I am a Casual Typist"<<endl;
        //show_data();
    }
};

class Regular: public Casual
{
public:
    void about()
    {
        cout<<"About Regular Typist: "<<endl;
    }
    void whoami()
    {
        cout<<"I am a Regular Typist"<<endl;

    }
    void show_data()
    {
        about();
        cout<<"name"<<"\t\t\t"<<"code"<<"\t\t"<<"speed\t\t"<<"wage"<<endl;
        cout<<name<<"\t\t"<<code<<"\t\t"<<speed<<"\t\t"<<wage<<endl;
    }
};
int main()
{
    Teacher t,t1;
    Staff s;
    Officer o,o1;
    Casual c,c1;
    Regular r,r1;
    t.sset_data(420,"Ataur");
    t.tset_data("programming with c++","Tata McGraw Hill");
    t.whoami();
    t.show_data();
    o.sset_data(222,"Md. Rashed");
    o.oset_data("First class");
    o.show_data();
    r.sset_data(333,"Robiul Awal");
    r.tyset_data(85.5);
    r.ctset_data(15000);
    r.show_data();
    c.sset_data(333,"Kawser Ahmed");
    c.tyset_data(78.900002);
    c.ctset_data(10000);
    c.show_data();
    //t.whoami();
    t1.get_data();
    t1.show_data();
    o1.get_data();
    o1.show_data();
    r1.get_data();
    r1.show_data();
    c1.get_data();
    c1.show_data();

}
