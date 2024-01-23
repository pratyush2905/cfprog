#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n <= 1)
    {
        if (v[0] >= x)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    else
    {
        sort(v.begin(), v.end());
        int extra = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > x)
            {
                extra += (v[i] - x);
            }
        }
        int c = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] >= x)
                c++;
            if (v[i] < x && extra > 0)
            {
                int a = x - v[i];
                if (extra >= a)
                {
                    extra -= a;
                    v[i] += a;
                    if (v[i] == x)
                        c++;
                }
            }
        }
        cout << c << endl;
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