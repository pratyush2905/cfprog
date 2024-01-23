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
    vector<int> v(n);
    fr(0, n)
    {
        cin >> v[i];
    }
    int ans1 = INT_MAX;
    fr(0, n)
    {
        ans1 = min(ans1, v[i]);
    }
    // cout<<ans1<<endl;
    int min_diff = INT_MAX;
    int g_ans = INT_MAX;
    int ind1 = -1, ind2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == ans1 && ind1 < 0)
        {
            ind1 = i;
            continue;
        }
        if (v[i] == ans1 && ind1 >= 0)
        {
            ind2 = i;
        }
        if (ind1 >= 0 && ind2 >= 0)
        {
            g_ans = min(g_ans, (ind2 - ind1));
            ind1 = ind2;
            ind2 = -1;
        }
    }
    cout << g_ans << endl;
}
signed main()
{
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}