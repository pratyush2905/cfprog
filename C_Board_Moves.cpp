#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll x=n/2;
    ll m=0;
    ll k=1;
    for(int i=1;i<=x;i++)
    {
        m+=(8*k)*i;
        k++;
    }
    cout<<m<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}