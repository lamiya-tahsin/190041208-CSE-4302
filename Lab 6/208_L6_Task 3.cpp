#include<bits/stdc++.h>
using namespace std;
//git commit 3
class Float{
private:
    float f;
public:
     Float():f(1.0)
    {
    }
    Float(float val):f(val)
    {
    }
    Float operator + (Float t)
    {
        return Float(f+t.f);
    }
    Float operator - (Float t)
    {
        return Float(f-t.f);
    }
    Float operator * (Float t)
    {
        return Float(f*t.f);
    }
    Float operator / (Float t)
    {
        if(t.f==0) cout<<"Invalid"<<endl;
        else return Float(f/t.f);
    }
    float getdata()
    {
        return f;
    }
};

int main()
{
    Float F1(2.5),F2(3.1);
    cout<<"F1= "<<F1.getdata()<<endl;
    cout<<"F2= "<<F2.getdata()<<endl;
    cout<<"F1+F2= "<<(F1+F2).getdata()<<endl;
    cout<<"F1-F2= "<<(F1-F2).getdata()<<endl;
    cout<<"F1*F2= "<<(F1*F2).getdata()<<endl;
    cout<<"F1/F2= "<<(F1/F2).getdata()<<endl;
}

