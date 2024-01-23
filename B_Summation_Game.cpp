#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n + 1);
    vector<int> pref(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    // pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i - 1];
    }
    int ans = INT_MIN;
    for (int i = 0; i <= k; i++)
    {
        int remaining_sum = pref[n] - pref[i];
        // i...i+x => -1
        int negtive_sum = pref[min(n, i + x)] - pref[i];
        int currAns = remaining_sum - (2 * negtive_sum);
        ans = max(ans, currAns);
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