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
    string l, r;
    cin >> l >> r;
    if (l == r)
    {
        cout << 0 << endl;
    }
    else
    {
        int diff = 0;
        int x = l.size();
        int y = r.size();
        while (l.size() < r.size())
        {
            l = '0' + l;
        }
        x = l.size();
        int sum = 0;
        for (int i = 0; i < x; i++)
        {
            if (l[i] != r[i])
            {
                diff = i;
                break;
            }
        }
        sum = abs(r[diff] - l[diff]);
        for (int i = diff + 1; i < x; i++)
        {
            sum+=9;
        }
        cout<<sum<<endl;
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