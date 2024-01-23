#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int p = 0;
    while ((5 * pow(2, p)) <= n)
    {
        p++;
    }
    int ans = 0;
    if (n <= 5)
    {
        if (n == 1)
            cout << "Sheldon";
        else if (n == 2)
            cout << "Leonard";

        else if (n == 3)
            cout << "Penny";

        else if (n == 4)
            cout << "Rajesh";

        else if (n == 5)
            cout << "Howard";
    }
    else
    {
        int y=1;
        while (y <= (p+1))
        {
            int x = n - y;
            if (x % 5 == 0)
            {
                ans = x / 5;
            }
            y++;
        }
        if (ans == 1)
            cout << "Sheldon";
        else if (ans == 2)
            cout << "Leonard";

        else if (ans == 3)
            cout << "Penny";

        else if (ans == 4)
            cout << "Rajesh";

        else if (ans == 5)
            cout << "Howard";
    }
}
signed main()
{
    solve();
}