#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    for (int i = 0; i <= m; i++)
    {
        cin >> v[i];
    }
    int ans = __builtin_popcount(v[m]);
    int len1;
    if (v[m + 1] > 64 && v[m] % 2 != 0)
    {
        len1 = floor(log2(v[m])) + 2;
    }
    else
    {
        len1 = floor(log2(v[m])) + 1;
    }
    int c = 0;
    for (int i = 0; i < m; i++)
    {
        int length = 0;
        if (v[i] > 64 && v[i] % 2 != 0)
        {
            length = floor(log2(v[i])) + 2;
        }
        else
        {
            length = floor(log2(v[i])) + 1;
        }
        int ans2 = __builtin_popcount(v[i]);
        if ((abs(length - len1) + abs(ans - ans2)) <= k)
        {
            c++;
        }
    }
    cout << c << endl;
}
signed main()
{
    solve();
}