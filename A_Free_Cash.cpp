#include <bits/stdc++.h>
//#define int long long
using namespace std;
void solve()
{
    int t;
    cin >> t;

    map<pair<int,int>,int>mp;
    int a,b;
    pair<int,int>p;
    for(int i=0;i<t;i++)
    {
        cin>>p.first>>p.second;
        mp[p]++;
    }

    int c=0;

    for(auto it : mp)
    {
        c=max(c,it.second);
    }
    cout<<c<<endl;
}
signed main()
{
    solve();
}