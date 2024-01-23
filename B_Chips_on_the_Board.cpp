#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a;
        vector<ll>b;
        ll sa=0;
        ll sb=0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            a.push_back(x);
            sa+=x;
        }
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            b.push_back(x);
            sb+=x;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll c1=a[0]*n+sb;
        ll c2=b[0]*n+sa;
        cout<<min(c1,c2)<<endl;
    }
}