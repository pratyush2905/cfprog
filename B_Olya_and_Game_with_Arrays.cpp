#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        long long mn2=1e9;
        long long mn1=1e9;
        cin>>n;
        vector<vector<long long>>v(n);
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            for(int j=0;j<m;j++)
            {
                long long x; cin>>x;
                v[i].push_back(x);
            }
        }
        for(int i=0;i<n;i++)
        sort(v[i].begin(),v[i].end());
        for(int i=0;i<n;i++)
        {
            mn2=min(v[i][1],mn2);
            mn1=min(v[i][0],mn1);
        }
        long long ans=0;
        long long count=0;
        for(int i=0;i<n;i++)
        {
            if(v[i][1]==mn2 and count==0)
            {
                count++;
            }
            else
            {
                ans+=v[i][1];
            }
        }
        ans+=mn1;
        cout<<ans<<endl;
    }
}