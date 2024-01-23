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
    vector<int> c(n + 1);
    fr(0, n)
    {
        cin >> v[i];
        c[v[i]]++;
    }
    int ans = 0;
    int smaller = 0;
    for (int i = 0; i <= n; i++)
    {
        ans += c[i] * (c[i] - 1) * (c[i] - 2) / 6;
        ans += c[i] * (c[i] - 1) / 2 * smaller;
        smaller += c[i];
    }
    cout << ans << endl;
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