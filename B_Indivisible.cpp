#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        int x = n;
        int s = 0;
        for (int i = 1; i <= n; i++)
        {
            s += i;
        }
        if (s % x != 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i<<" ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
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