#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int s = (n * (n + 1)) / 2;
    if (s < x)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        int sk = (k * (k + 1)) / 2;
        int ms=0;
        ms=(n*(n+1)-((n-k)*(n-k+1)))/2;
        if (x >= sk && ms>=x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
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