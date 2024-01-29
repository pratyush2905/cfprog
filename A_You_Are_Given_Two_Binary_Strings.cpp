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
    string x, y;
    cin >> x >> y;
    reverse(all(x));
    reverse(all(y));
    int px = 0, py = 0;
    for (int i = 0; i < y.length(); i++)
    {
        if (y[i] == '1')
        {
            py = i;
            break;
        }
    }
    for (int i = py; i < x.length(); i++)
    {
        if (x[i] == '1')
        {
            px = i;
            break;
        }
    }
    if (px > py)
    {
        cout << (px - py) << endl;
    }
    else
        cout << 0 << endl;
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