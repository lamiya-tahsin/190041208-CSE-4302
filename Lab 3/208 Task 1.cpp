#include<bits/stdc++.h>
#define lli long long int
//git check
using namespace std;

class Counter{
private:
    int count;
    int in_step;
public:
    Counter():count(0)
    {
    }
    void setIncrementStep(int step_val)
    {
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


};
int main()
{
    Counter c;
    c.setIncrementStep(5);
    cout<<c.getCount()<<endl;
    c.increment();
     cout<<c.getCount()<<endl;
     c.resetCount();
      cout<<c.getCount()<<endl;
}
