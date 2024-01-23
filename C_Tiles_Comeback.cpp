#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        ll p=1;
        ll i=1;
        while(i!=n)
        {
            if(p<k)
            {
                if(v[i]==v[i-1])
                {
                    p++;
                }
            }
        }
    }
}