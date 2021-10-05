#include<bits/stdc++.h>
//git commit
int add(int x,int y)
{
    return x+y;
}
namespace my_namespace
{
    int add(int x,int y)
    {
        return x*y;
    }
}
int main()
{
    int a=6,b=9,c;
    c=my_namespace::add(a,b);
    std::cout<<c;

}
