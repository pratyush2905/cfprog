#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    ll v[m];
    for(ll i=1;i<=m;i++)
    {
        cin>>v[i];
    }
    ll c=v[1];
    for(ll i=2;i<=m;i++)
    {
        if(v[i]>=v[i-1])
        {
            c+=v[i]-v[i-1];
        }
        else if(v[i]<v[i-1])
        {
            c+=(n-v[i-1])+v[i];
        }
    }
    cout<<c-1;

}