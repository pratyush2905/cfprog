#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p;
        cin>>n>>p;
        vector<pair<ll ,int>>pi;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            pi.push_back({0,x});
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            pi[i].first=x;
        }
        pi.push_back({p,n+1});
        sort(pi.begin(),pi.end());
        ll cost=p;
        int sh=2;
        int prsn=0;
        while(sh!=n+1)
        {
            int rem=(n+1-sh);
            if(pi[prsn].second>rem)
            {
                sh=n+1;
                cost+=(pi[prsn].first*rem);
            }
            else
            {
                sh+=pi[prsn].second;
                cost+=(pi[prsn].first * pi[prsn].second);
            }
            prsn++;
        }
        cout<<cost<<endl;
    }
}