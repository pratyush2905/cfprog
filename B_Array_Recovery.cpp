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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> vf(n);
    int f = -1;
    // cout<<v[0]<<" ";
    for (int i = 1; i < n; i++)
    {
        int a = v[i] - v[i - 1];
        int b = v[i - 1] + v[i];
        if (v[i] <= v[i - 1] && v[i] > 0)
        {
            f++;
            break;
        }
        else
        {
            v[i] = v[i] + v[i - 1];
        }
    }
    if (f < 0)
    {
        for (auto it : v)
            cout << it << " ";
    }
    else if (f >= 0)
    {
        cout << -1;
    }
    cout << endl;
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