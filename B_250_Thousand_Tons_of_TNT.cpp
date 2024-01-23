#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 1; i <n; i++)
    {
        if (n % i == 0)
        {
            int mx = 0;
            int mn = 1e15;
            int s = 0;
            for (int k = 1; k <= n; k++)
            {
                s += v[k-1];
                if (k % i == 0)
                {
                    mx = max(mx, s);
                    mn = min(mn, s);
                    s = 0;
                }
            }
            ans = max(ans, mx - mn);
        }
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