#include<bits/stdc++.h>
using namespace std;
//git commit check

class Person
{
protected:
    string ID;
    string name;
    string gender;
    int age;
    string qualification;
public:
    Person(string id,string n,string g,int a,string q)
    {
        setid(id);
        setName(n);
        setgender(g);
        setage(a);
        setqualify(q);
        }
    void setid(string val)
    {
        ID=val;
    }
    void setName(string val)
    {
        name=val;
    }

    void setgender(string val)
    {
        gender=val;
    }
    void setage(int val)
    {
        if(val>0) age=val;
    }
    void setqualify(string s)
    {
        qualification=s;
    }
    virtual void view_details()=0;
    virtual void education()
    {
        cout<<"Qualification: "<<endl;
    }
    virtual void display_intro()
    {
        cout<<"ID: "<<ID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Age: "<<age<<endl;
    }

};
class Doctor: public Person
{
protected:
    string specialization;
public:
    Doctor(string id,string n,string g,int a,string qua,string spe):Person(id,n,g,a,qua)
    {
        setspclzn(spe);
    }
    void setspclzn(string s)
    {
        specialization=s;
    }
    void education()
    {
        cout<<"Specialization: "<<specialization<<endl;
        cout<<"Qualification: "<<qualification<<endl;
    }
    void display_intro()
    {
        cout<<"About Doctor: "<<endl;
        Person::display_intro();
    }
    void view_details()
    {
        Person::display_intro();
        education();
        cout<<endl;
    }


};

class Patient: public Person{
protected:
    string health_issue;
    string doctor_name;
public:
    Patient(string id,string n,string g,int a,string q,string h,string dn):Person(id,n,g,a,q)
    {
        setissue(h);
        docname(dn);
    }
    void setissue(string s)
    {
        health_issue=s;
    }
    void docname(string s)
    {
        doctor_name=s;
    }
    void display_intro()
    {
        cout<<"About Patient: "<<endl;
        Person::display_intro();
    }
    void history()
    {
        cout<<"Medical History: "<<health_issue<<endl;
        cout<<"Consulting Doctor: "<<doctor_name<<endl;
    }
    void view_details()
    {
        Person::display_intro();
        history();
        cout<<endl;
    }

};

class Receiptionist: public Person{
public:
    Receiptionist(string id,string n,string g,int a,string qua):Person(id,n,g,a,qua)
    {
    }
    void education()
    {
        cout<<"Qualification: "<<qualification<<endl;
    }
    void display_intro()
    {
        cout<<"About Receiptionist: "<<endl;
        Person::display_intro();
    }
    void view_details()
    {
        Person::display_intro();
        education();
        cout<<endl;
    }
};



int main()
{
    Person* p[100];

    p[0] = new Doctor("D#101","Dr. Abdul Qader","Male",45,"MBBS, DCH, MRCP","Cardiology");
    p[1] = new Patient("P#1045","Mr. Rafique","Male",34,"Not Required","Heart Attack,Diabetes","Dr. Sharmin Akter");
    p[2] = new Receiptionist("R#453","Mithila Sharker","Female",26,"HSC");

    for(int i=0; i<3; i++)
    {
        p[i]->view_details();
    }
    //p[1]->display_intro();
    for(int i=0; i<3; i++)
    {
        delete p[i];
    }

}
