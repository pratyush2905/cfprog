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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pos(1001,0);
    for (int i = 0; i < n; i++)
    {
        pos[v[i]] = i + 1;
    }
    int f = -1;
    int cnt_max = INT_MIN;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = i; j <= 1000; j++)
        {
            if (gcd(i, j) == 1 && pos[i] > 0 && pos[j] > 0)
            {
                cnt_max = max(cnt_max, pos[i] + pos[j]);
                f++;
            }
        }
    }
    if (f < 0)
        cout << -1 << endl;
    else
        cout << cnt_max << endl;
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