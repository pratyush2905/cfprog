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
    string s;
    cin >> s;
    vector<int> profit;
    int total = 0;
    int min_change = 0;
    for (int i = 0; i < n; i++)
    {
        int L = i;
        int R = n - i - 1;
        if (s[i] == 'L')
        {
            if (R > L)
            {
                min_change++;
                total += R;
                profit.push_back(R - L);
            }
            else
                total += L;
        }
        else
        {
            if (L > R)
            {
                min_change++;
                total += L;
                profit.push_back(L - R);
            }
            else
                total += R;
        }
    }
    vector<int> ans(n + 1);
    for (int i = min_change; i <= n; i++)
    {
        ans[i] = total;
    }
    sort(all(profit), greater<int>());
    for (int i = min_change - 1; i >= 1; i--)
    {
        total -= profit.back();
        profit.pop_back();
        ans[i] = total;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
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