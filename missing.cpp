#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<int>v;
    ll s=0;
    for(ll i=0;i<n-1;i++)
    {
        ll x;
        cin>>x;
        s=s+x;
    }
    ll ts=n*(n+1)/2;
    cout<<ts-s;
}