#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int s = 0;
    int c = 0;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 5)
        {
            c++;
        }
        else
            z++;
    }
    if (c == n)
    {
        cout << -1 << endl;
    }
    else
    {
        while (c != 0)
        {
            if ((c * 5) % 9 == 0)
                break;
            c--;
        }
        if (c == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            while (c != 0)
            {
                cout << 5;
                c--;
            }
            while (z != 0)
            {
                cout << 0;
                z--;
            }
        }
    }
}
signed main()
{
    solve();
}