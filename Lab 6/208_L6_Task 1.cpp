#include<bits/stdc++.h>
using namespace std;
//git
class Counter{
private:
    int count;
    int in_step;
public:
    Counter():count(0),in_step(1)
    {
    }
    Counter(int c):count(c)
    {
    }
    Counter(int c,int n):count(c),in_step(n)
    {
    }

    void setIncrementStep(int step_val)
    {
        if(step_val<0) step_val=1;
        in_step=step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=in_step;
    }
    void resetCount()
    {
        count=0;
    }
    Counter operator + (Counter a) const
    {
       //cout<<"works"<<endl;
        return Counter(count+a.count);
    }
    Counter operator + (int a)
    {
        return Counter(count+a);
    }
    friend Counter operator +(int lop, Counter rop);
    Counter operator +=(Counter c)
    {
        count+=c.count;
    }
    Counter operator ++( )
    {
        increment();
        return Counter(count, in_step);
    }
    Counter operator ++(int)
    {
         Counter temp;
        temp.count=count;
        temp.in_step=in_step;
        increment();
        return temp;

    }


};
Counter operator+(int lop,Counter rop)
{
    return Counter(lop+rop.count);
}

int main()
{

    Counter c,c1,c2,c3;
    c.setIncrementStep(5);
    cout<<c.getCount()<<endl;
    c.increment();
     cout<<c.getCount()<<endl;
     c.resetCount();
      cout<<c.getCount()<<endl;
      c2.setIncrementStep(5);
      c2.increment();
     cout<<"c2= "<<c2.getCount()<<endl;
     c3.setIncrementStep(7);
      c3.increment();
     cout<<"c3= "<<c3.getCount()<<endl;
     c1=c2+c3;
     cout<<"c1=c2+c3 c1="<<c1.getCount()<<endl;
     c1=c2+5;
     cout<<"c1=c2+var c1="<<c1.getCount()<<endl;
     c1=7+c2;
     cout<<"c1=var+c2 c1="<<c1.getCount()<<endl;
     //++c2;
     c1+=c2;
     cout<<"c1+=c2 c1="<<c1.getCount()<<endl;
     c1=c2++;
     cout<<"c1=c2++ c1="<<c1.getCount()<<endl;
     c1=++c2;
     cout<<"c1=++c2 c1="<<c1.getCount()<<endl;



}
