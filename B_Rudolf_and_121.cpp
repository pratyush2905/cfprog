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
    int f = -1;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] >= 2 * v[i - 1] && v[i - 1] <= v[i + 1])
        {
            v[i + 1] -= v[i - 1];
            v[i] -= 2 * v[i - 1];
            v[i - 1] = 0;
        }
    }
    fr(0, n)
    {
        if (v[i] != 0)
        {
            f++;
            break;
        }
    }
    if (f >= 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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