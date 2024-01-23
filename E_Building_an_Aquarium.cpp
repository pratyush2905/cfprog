#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll h,ll k,vector<ll>&a)
{
    ll w=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<=h)
        {
            w=w+(h-a[i]);
        }
    }
    if(w<=k)
    return true;
    else
    return false;
}
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll l=0,h=1e10;
    while(l<=h)
    {
        ll m=l+(h-l)/2;
        if(check(m,k,a))
        {
            ans=max(ans,m);
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    solve();
}