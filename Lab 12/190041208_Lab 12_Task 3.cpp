#include<bits/stdc++.h>
#include <iostream>
using namespace std;
//git commit
#include <process.h> //for exit()
const int LIMIT = 100; //array size

template<class Type>
class safearay
{
private:
    Type arr[LIMIT];
public:
    class index_error
    {
    public:
        int index;
        index_error(int x)
        {
            index=x;
        }
    };
    Type& operator [](int n)
    {
        if( n< 0 || n>=LIMIT )
        {
            throw index_error(n);
        }
        return arr[n];
    }
};

int main()
{
    try
    {
        safearay<int> sa1;
        for(int j=0; j<LIMIT+10; j++)
            sa1[j] = j*10;
        for(int j=0; j<LIMIT+10; j++)
        {
            cout << "Element " << j << " is " << sa1[j] << endl;
        }
        safearay<float> sa12;
        for(float i=0.00; i<LIMIT; i++) //insert elements
        sa12[i] = i*10.15; //*left* side of equal sign
        for(int i=0; i<LIMIT; i++) //display elements
        {
        float temp2 = sa12[i]; //*right* side of equal sign
        cout << "Element " << i << " is " <<fixed<<setprecision(4)<< temp2 << endl;
        }
    }
    catch(safearay<int>::index_error id)
    {
        cout<<"Index that is out of bounds: "<<id.index;
    }
    cout<<endl;

}
