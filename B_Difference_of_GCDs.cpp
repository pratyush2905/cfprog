#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v;
    int t = 1;
    int f = -1;
    for (int i = 1; i <= n; i++)
    {
        int x = ((l - 1) / i + 1) * i;
        if (x > r)
        {
            f++;
            break;
        }
        v.push_back(x);
        t++;
    }
    if (f >= 0)
        cout << "NO" << endl;
    else
    {
        if (v.size() < n)
        {
            cout << "NO"<<endl;
            return;
        }
        cout << "YES" << endl;
        for (auto it : v)
            cout << it << " ";
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