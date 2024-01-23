#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b, n, s;
    cin >> a >> b >> n >> s;
    int m = a * n + b;
    if (m < s)
    {
        cout << "NO" << endl;
        return;
    }
    else if(m==s)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        if (s % n == 0)
        {
            int x = s / n;
            if (x <= a)
            {
                cout << "YES" << endl;
                return;
            }
            else
            {
                s -= a * n;
                if (b >= s)
                {
                    cout << "YES" << endl;
                    return;
                }
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        else
        {
            int t = a * n;
            if (t <= s)
            {
                s -= t;
                if (b >= s)
                {
                    cout << "YES" << endl;
                    return;
                }
                else
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else
            {
                while (s > n)
                {
                    s -= n;
                }
                if (b >= s)
                {
                    cout << "YES" << endl;
                    return;
                }
                else
                {
                    cout << "NO" << endl;
                    return;
                }
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