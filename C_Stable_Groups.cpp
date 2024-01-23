#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int c = 0;
    vector<int> v(n);
    fr(0, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int g = 0;
    vector<int> vg;
    rep(i, 0, n - 1)
    {
        long double diff = v[i + 1] - v[i];
        if (diff > x)
        {
            if (diff / x == 1)
                vg.push_back(diff / x);
            else
            {
                long double ct = ceil(diff/x);
                //cout<<c<<endl;
                int a = ct - 1;
                vg.push_back(a);
            }
        }
    }
    sort(all(vg));

    /*for (auto it : vg)
        cout << it << " ";*/

    for (int i = 0; i < vg.size(); i++)
    {
        if (vg[i] <= k)
        {
            if (k > 0)
            {
                k -= vg[i];
                vg[i] = -1;
            }
        }
    }
    for (int i = 0; i < vg.size(); i++)
    {
        if (vg[i] >= 0)
        {
            c++;
        }
    }
    cout << c + 1 << endl;
}
signed main()
{

    solve();
}