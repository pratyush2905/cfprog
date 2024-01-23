#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
vector<ll>v;
void solve(ll x)
{
    ll l=-1;
    ll r=n;
    while(r>l+1)
    {
        ll m=(r+l)/2;
        if(v[m]<=x)
        l=m;
        else
        r=m;
    }
    cout<<(l+1)<<endl;
}
int main()
{
    cin>>n;
    v.resize(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll q;
    cin>>q;
    vector<ll>cv(q);
    for(ll i=0;i<q;i++)
    {
        cin>>cv[i];
        solve(cv[i]);
    }
}