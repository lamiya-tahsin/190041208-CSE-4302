#include<bits/stdc++.h>
using namespace std;

class Employee{
private:
    string EmpName;
    int id;
    int age;
    float salary;
    int getstatus()
    {
        if(age<=25)
        {
            if(salary <=20000)
            {
                return 0;
            }
            else return 1;
        }
        else
        {
            if(salary <=21000) return 0;
            else if(salary>21000 && salary<=60000) return 1;
            else return 2;
        }
    }
public:
    void FeedInfo()
    {
        cout<<"Enter name: ";
        cin>>EmpName;
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter salary: ";
        cin>>salary;

    }
    void showInfo()
    {
        cout<<"Name: "<<EmpName<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl;
        if(getstatus()==0) cout<<"Low Salaried Person"<<endl;
        else if(getstatus()==1) cout<<"Moderate Salaried Person"<<endl;
        else if(getstatus()==2) cout<<"High Salaried Person"<<endl;
    }
};

int main()
{
    Employee e1;
    e1.FeedInfo();
    e1.showInfo();

}
