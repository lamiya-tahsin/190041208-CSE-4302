#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//git check
int main()
{
    int even[]={2,4,6,8,10,12,14,16};
    set<int>odd;
    for(int i=1;i<18;i+=2)
    {
        odd.insert(i);
    }
    vector<int>v;
    merge(even,even+8,odd.begin(),odd.end(),back_inserter(v));
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}
