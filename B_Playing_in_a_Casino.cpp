#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    int v[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
    int ans = 0;
    for (int j = 0; j < m; j++)
    {
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            v2.push_back(v[i][j]);
        }
        sort(all(v2));
        for (int i = 0; i < n; i++)
        {
            ans+=v2[i]*i;
            ans-=v2[i]*(n-(i+1));
        }
        // cout<<endl;
    }
    cout << ans;
    cout << endl;
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