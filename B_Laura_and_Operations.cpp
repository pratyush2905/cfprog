#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int i = 0;
    vector<int> v2(3);

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            if ((b == c) || ((abs(b - c) % 2 == 0) && a >= 1))
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        if (i == 1)
        {
            if ((a == c) || ((abs(a - c) % 2 == 0) && b >= 1))
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        if (i == 2)
        {
            if ((a == b) || ((abs(a - b) % 2 == 0) && b >= 1))
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
    }
    cout<<endl;
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