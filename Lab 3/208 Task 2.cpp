#include<bits/stdc++.h>
using namespace std;

class RationalNumber{
private:
    int numerator;
    int denominator;
    int temp,flag=0;
public:
    void assign(int nume,int denom)
    {
        if(denom==0)
        {
            cout<<"UNDEFINED!"<<endl;
            flag=1;
            return;
        }
        numerator=nume;
        denominator=denom;

    }
    double convert()
    {
       if(!flag)
       {
           double c=(double)numerator/(double)denominator;
            cout<<fixed<<setprecision(4);
            return c;
       }
       else cout<<"Cannot be convertd into decimal equivalent!"<<endl;
    }
    void invert()
    {
        if(flag || numerator==0)
        {
            cout<<"Cannot be inverted!"<<endl;
            return;
        }
        if(numerator)
        {
            temp=denominator;
            denominator=numerator;
            numerator=temp;
        }
    }
    void print()
    {
        if(!flag){
            if(numerator) cout<<"The Rational Number is "<<numerator<<"/"<<denominator<<endl;
            else cout<<"The Rational Number is 0"<<endl;
        }
    }


};
int main()
{
    RationalNumber r1,r2,r3;
    r1.assign(0,2);
    r1.print();
    r1.invert();
    cout<<"The decimal equivalent is : "<<r1.convert()<<endl;

    r2.assign(2,0);
    r2.print();
    r2.invert();
    r2.print();
    cout<<"The decimal equivalent is : "<<r2.convert()<<endl;

    r3.assign(3,5);
    r3.print();
    cout<<"The decimal equivalent is : "<<r3.convert()<<endl;
    r3.invert();
    r3.print();
    cout<<"The decimal equivalent is : "<<r3.convert()<<endl;




}
