#include<bits/stdc++.h>
using namespace std;
//git push
template <typename T>
T amax(const T a[], const int &asize)
{
    T maxv = a[0];
    for(int i = 0; i < asize; i++)
    {
        maxv=max(maxv,a[i]);
    }
    return maxv;
}


int main()
{
    float a1[]={1.1,2.1,2.45,6.5,7.9,9.8,1.3};
    int a2[]={2,3,4,5,9,8,7,1};

    float m1=amax<float>(a1,7);
    cout<<m1<<endl;
    int m2=amax<int>(a2,8);
    cout<<m2<<endl;

}
