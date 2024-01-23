#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c % a == 0 || c % b == 0)
        cout << "Yes" << endl;
    else
    {
        int x = c/a;
        int y = c/b;
        if (x % b == 0 || y % a == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
signed main()
{
    solve();
}