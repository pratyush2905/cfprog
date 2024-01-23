#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int c=1;
        int mx=1;
        for(int i=1;i<n;i++)
        {
            int d=(v[i]-v[i-1]);
            if(d>k)
            {
                c=1;
            }
            else
            c++;
            mx=max(mx,c);
        }
        cout<<(n-mx)<<endl;
    }
}