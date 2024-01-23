#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b, xk, yk, xq, yq;
    cin >> a >> b;
    cin >> xk >> yk;
    cin >> xq >> yq;
    int c = 0;
    if (xk - a == b && yk - b == a)
    {
        if (xq + a == b && yq + b == a)
            c++;
    }
    else if (xk + a == b && yk + b == a)
    {
        if (xq - a == b && yq - b == a)
            c++;
    }
    cout << c << endl;
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