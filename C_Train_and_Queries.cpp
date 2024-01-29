#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
// जय श्रीराम //
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> u(n);
    map<int,pair<int,int>>mp;
    for (int i = 0; i < n; i++)
    {
        int u;
        cin >> u;
        if(mp.count(u)==0)
        {
            mp[u].first=i;
            mp[u].second=i;
        }
        else
        {
            mp[u].second=i;
        }
    }
    while(k--)
    {
        int a,b;
        cin>>a>>b;
        if(mp.count(a)==0 || mp.count(b)==0 || mp[a].first>mp[b].second)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
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