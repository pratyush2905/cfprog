#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int f=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i+2;j<n;j++)
        {
            if(v[j]==v[i])
            f++;
        }
    }
    if(f>=0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}