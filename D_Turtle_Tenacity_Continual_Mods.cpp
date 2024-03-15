#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fr(0, n)
    {
        cin >> v[i];
    }
    sort(all(v));
    if (n == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (v[0] != v[1])
            cout << "YES" << endl;
        else
        {
            bool flag = false;
            for (int i = 1; i < n; i++)
            {
                if (v[i] % v[0] != 0)
                {
                    flag = true;
                }
            }
            if (flag == true)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
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