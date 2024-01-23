#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n, f, a, b;
    cin >> n >> f >> a >> b;
    vector<int> v(n);
    fr(0, n)
    {
        cin >> v[i];
    }
    int flag = -1;
    int p = 0;
    int x = 0;
    /*for(auto it : v)
    {
        cout<<it<<" "<<endl;
    }*/
    fr(0, n)
    {
        x = min(b, abs(v[i] - p) * a);
        f -= x;
        p = v[i];
    }
    if (f > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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