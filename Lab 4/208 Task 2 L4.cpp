#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    double len;
    double wid;
public:
    Rectangle():len(1),wid(1)
    {
    }
    Rectangle(double l,double w):len(l),wid(w)
    {
        cout<<"Enter length: ";
        cin>>l;
        cout<<endl<<"Enter width: ";
        cin>>w;
        cout<<endl;
    }
    void area()
    {
        double a=len*wid;
        cout<<"The area is: "<<a<<"sq. unit"<<endl;
    }
    void peri()
    {
        double p=2*(len+wid);
        cout<<"The perimeter is: "<<p<<" unit"<<endl;
    }
    void diagonal()
    {
        double d=sqrt((len*len)+(wid*wid));
        cout<<"The length of the diagonal is: "<<d<<" unit"<<endl;
    }
    void angle()
    {
        cout<<"The angle between diagonal and a length is 45 degrees"<<endl;
    }
    void get()
    {
        cout<<"Length: ";
        cin>>len;
        if(!set(len))
            len=1;
        cout<<"Width: ";
        cin>>wid;
        if(!set(wid))
            wid=1;
    }
     bool set(float n)
    {
        if(n>=1.0 && n<20.0) return true;
    }
};

int main()
{
    Rectangle r1;
    r1.get();
    r1.area();
   r1.peri();
    r1.diagonal();
    r1.angle();
}
