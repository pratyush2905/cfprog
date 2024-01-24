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
    int c1, c2, c3, c4;
    cin >> c1 >> c2 >> c3 >> c4;
    int total = c1 + c2 + c3 + c4;
    int ans = c1;
    if (ans > 0)
    {
        ans += 2 * min(c2, c3);
        int temp = min(c2, c3);
        c2 -= temp;
        c3 -= temp;
    }
    c2 = min(c2, ans);
    c3 = min(c3, ans);
    ans += c2 + c3;
    c4 = min({c4, c1 - c2, c1 - c3});
    ans += c4;
    cout << min(ans + 1, total) << endl;
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