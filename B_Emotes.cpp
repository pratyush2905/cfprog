#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>v;
    for(ll i =0; i<n; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll terms=0;
    ll max=0;
    ll x=v[n-1];
    ll y=v[n-2];
    ll sum=(x*k+y)*(m/(k+1))+(m%(k+1))*x;
    cout<<sum;
}