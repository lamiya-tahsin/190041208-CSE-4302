// arrover3.cpp
// creates safe array (index values are checked before access)
// uses overloaded [] operator for both put and get
//git push
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#include <process.h> //for exit()
const int LIMIT = 100; //array size
////////////////////////////////////////////////////////////////
template<class Type>
class safearay
{
private:
    Type arr[LIMIT];
public:
    Type& operator [](int n) //note: return by reference
    {
        if( n< 0 || n>=LIMIT )
            { cout << "\nIndex out of bounds"; exit(1); }
        return arr[n];
    }
};
////////////////////////////////////////////////////////////////
int main()
{
    safearay<int> sa1;
    for(int j=0; j<LIMIT; j++) //insert elements
        sa1[j] = j*10; //*left* side of equal sign
    for(int j=0; j<LIMIT; j++) //display elements
    {
        int temp = sa1[j]; //*right* side of equal sign
        cout << "Element " << j << " is " << temp << endl;
    }
    cout<<"////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl;
    safearay<float> sa12;
    for(float i=0.00; i<LIMIT; i++) //insert elements
        sa12[i] = i*10.15; //*left* side of equal sign
    for(int i=0; i<LIMIT; i++) //display elements
    {
        float temp2 = sa12[i]; //*right* side of equal sign
        cout << "Element " << i << " is " <<fixed<<setprecision(4)<< temp2 << endl;
    }
    return 0;
}

