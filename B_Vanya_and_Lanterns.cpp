#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
// जय श्रीराम //
using namespace std;
void solve()
{
    double n, l;
    cin >> n >> l;
    vector<double> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // v.push_back(l);

    double d = 0;
    sort(all(v));
    d = max(d, v[0]);
    for (int i = 0; i < n - 1; i++)
    {
        double x = (v[i + 1] - v[i]) / 2;
        d = max(d, x);
    }
    double x = l - v[n - 1];
    d = max(d, x);
    cout<<fixed;
    cout << setprecision(10) << d;
}
signed main()
{
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}