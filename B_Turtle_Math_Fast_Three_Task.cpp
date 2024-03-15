#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    fr(0, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 3 == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (sum % 3 == 2)
    {
        cout << 1 << endl;
        return;
    }
    fr(0, n)
    {
        int x = sum - v[i];
        if (x % 3 == 0)
        {
            cout << 1 << endl;
            return;
        }
    }
    cout << 2 << endl;
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