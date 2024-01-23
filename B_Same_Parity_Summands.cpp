#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    if (n < k)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        if (n % 2 == 0)
        {
            if (k % 2 != 0)
            {
                if (n < 2 * k)
                    cout << "NO" << endl;
                else
                {
                    int c = 0;
                    cout << "YES" << endl;
                    while (k > 1)
                    {
                        cout << 2 << " ";
                        k--;
                        c++;
                    }
                    cout << (n - (2 * c)) << endl;
                }
            }
            else
            {
                int c = 0;
                cout << "YES" << endl;
                while (k > 1)
                {
                    cout << 1 << " ";
                    k--;
                    c++;
                }
                cout << (n - c) << endl;
            }
        }
        else
        {
            if (k % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                int c = 0;
                cout << "YES" << endl;
                while (k > 1)
                {
                    cout << 1 << " ";
                    k--;
                    c++;
                }
                cout << (n - c) << endl;
            }
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