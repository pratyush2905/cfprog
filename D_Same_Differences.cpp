#include <bits/stdc++.h>
#define int long long
using namespace std;
/*int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}*/
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x - i]++;
    }
    int c = 0;
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            ans +=it.second*(it.second-1);
        }
    }
    cout << ans/2 << endl;
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