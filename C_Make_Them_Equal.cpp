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
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    int f = -1;
    int flag = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != c)
            flag++;
    }
    if (flag < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = n / 2; i < n; i++)
        {
            if (s[i] == c)
            {
                cout << 1 << endl;
                cout << (i + 1) << endl;
                f++;
                break;
            }
        }
        if (f < 0)
        {
            cout << 2 << endl;
            cout << n  << " " << n - 1 << endl;
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