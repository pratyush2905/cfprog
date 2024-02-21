#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second=i;
    }
    sort(all(v));
    vector<pair<int,int>>v2;
    int c =0;
    for (int i = 1; i < n; i++)
    {
        if(v[i].first%v[i-1].first!=0)
        {
            int x = v[i-1].first-(v[i].first%v[i-1].first);
            v2.push_back(make_pair((v[i].second+1),x));
            v[i].first+=x;
            c++;
        }
    }
    cout<<c<<endl;
    for(auto it : v2)
    cout<<it.first<<" "<<it.second<<endl;
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