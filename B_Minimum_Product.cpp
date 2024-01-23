
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    int am = (a - n);
    int bm = (b - n);

    if (am > x && bm > y)
    {
        if (a >= b)
        {
            cout << (a * bm) << endl;
        }
        else
            cout << (b * am) << endl;
    }
    else
    {
        if (a >= b)
        {
            while (b > y && n > 0)
            {
                b--;
                n--;
            }
            if (n > 0)
            {
                while (a > x && n > 0)
                {
                    a--;
                    n--;
                }
            }
            cout << (a * b) << endl;
        }
        else
        {
            while (a > x && n > 0)
            {
                a--;
                n--;
            }
            if (n > 0)
            {
                while (b > y && n > 0)
                {
                    b--;
                    n--;
                }
            }
            cout << (a * b) << endl;
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