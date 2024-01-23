#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll b,ll p)
{
    ll res=1;
    while(p)
    {
        if(p%2)
        {
            res*=b;
            p--;
        }
        else
        {
            b*=b;
            p/=2;
        }
    }
    return res;
}

int main()
{
    ll n;
    cin>>n;
    ll a=solve(n,2);
    cout<<((2*a)-n);
}