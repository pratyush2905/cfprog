#include<bits/stdc++.h>
using namespace std;
int solve(int b,int p)
{
    long long res=1;
    while(p!=0)
    {
        if(p%2==0)
        {
            b=(b*b);
            p=p/2;
        }
        else
        {
            res=(res*b);
            p--;
        }
    }
    return (res);
    
}
int main()
{
    long int n,m;
    cin>>n>>m;
    if(n<27)
    {
        cout<<(m%solve(2,n))<<endl;
    }
    else
    {
        cout<<m<<endl;
    }
}