#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[2][n];
    int c = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< a[i][j];
        }
        cout<<endl;
    }
    for (int j = 0; j < n; j++)
    {
        if (j == 0)
        {
            if (a[0][j + 1] == 1)
            {
                c++;
                a[0][j + 1] = 0;
            }
        }
        else if (j == n - 1)
        {
            if (a[0][j - 1] == 1)
            {
                c++;
                a[0][j - 1] = 0;
            }
        }
        else
        {
            if (a[0][j + 1] == 1)
            {
                c++;
                a[0][j + 1] = 0;
            }
            else if (a[0][j - 1] == 1)
            {
                c++;
                a[0][j - 1] = 0;
            }
        }
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