#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    vector<int>v(4);
    for(int i=0;i<4;i++)
    {
        cin>>v[i];
    }
    int s=0;
    for(int i=0;i<4;i+=2)
    {
        s+=max(v[i],v[i+1]);
    }
    sort(v.begin(),v.end());
    if(s==(v[3]+v[2]))
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