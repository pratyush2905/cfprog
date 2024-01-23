#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    if (b > a)
    {
        cout << "1" << endl;
    }
    else if (b == a)
    {
        cout << "2" << endl;
    }
    else
    {
        int c = 0;
        if (b == 1)
        {
            while (a >= b)
            {
                a = a / b;
                b++;
                c+=2;
            }
            if (a == b)
                cout << (c + 1) << endl;
            else
                cout << c << endl;
        }
        else
        {
            while (a >= b)
            {
                a /= b;
                c++;
            }
            if (a == b)
                cout << (c + 1) << endl;
            else
                cout << c << endl;
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