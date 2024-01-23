#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int x;
    cin>>x;
    vector<int>v(x);
    int m=0;
    for(int i=0;i<x;i++)
    {
        cin>>v[i];
    }
    int c0=0,c1=0,c2=0;
    for(int i=0;i<x;i++)
    {
        if(v[i]%3==0)
        c0++;
        else if(v[i]%3==1)
        c1++;
        else if(v[i]%3==2)
        c2++;
    }
    int a=x/3;
    while(c0!=a || c1!=a || c2!=a)
    {
        if(c0>a)
        {
            c0--;
            c1++;
            m++;
        }
        if(c1>a)
        {
            c1--;
            c2++;
            m++;
        }
        if(c2>a)
        {
            c2--;
            c0++;
            m++;
        }
    }
    cout<<m<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}