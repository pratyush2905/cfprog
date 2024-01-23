#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll minsum=0;
    ll window=0;
    ll index=0;
    for(ll i=0;i<k;i++)
    {
        window+=v[i];
    }
    minsum=window;
    for(ll j=k;j<n;j++)
    {
        window+=v[j]-v[j-k];
        if(window<minsum)
        {
            minsum=window;
            index=j-k+1;
        }
    }
    cout<<index+1;
}