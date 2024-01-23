#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int c1, c2, c3, c4, c5;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    if (sum == 0)
    {
        cout << -1;
    }
    else
    {
        if (sum % 5 != 0)
        {
            cout << -1;
        }
        else
        {
            cout << sum / 5;
        }
    }
}
signed main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}