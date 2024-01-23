#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int c = 0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] != a[(n - i) + 1][(n - j) + 1])
                c++;
        }
    }
    c/=2;
    if (c == k)
    {
        cout << "YES" << endl;
    }
    else if (c > k)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            int x = k - c;
            if (x % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    //cout<<c<<endl;
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