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
    int n;
    cin >> n;
    vector<int> v(n);
    int pos = 0;
    int neg = 0;

    fr(0, n)
    {
        int x;
        cin >> x;
        if (x < 0)
            neg++;
        else
            pos++;
    }
    int ans = 0;
    if (pos == 0)
    {
        cout << neg << endl;
    }
    else
    {
        while (pos < neg)
        {
            pos++;
            ans++;
            neg--;
        }
        cout << ans << endl;
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