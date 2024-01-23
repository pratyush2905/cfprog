#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    map<int,int>mp;
    for(int i=0;i<4;i++)
    {
        int a,b;
        cin>>a>>b;
        if(mp[a]!=0)
        {
            mp[a]=(mp[a]-b);
        }
        else
        mp[a]=b;
    }
    int a=1;
    for(auto it : mp)
    {
        a=it.second*a;
    }
    cout<<abs(a)<<endl;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}