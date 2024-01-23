#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << "First" << endl;
    else
    {
        if (n % 5 != 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
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