#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
// जय श्रीराम//
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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = v[i];
        while (temp % 2 == 0)
        {
            count++;
            temp /= 2;
        }
    }
    if (count >= n)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        vector<int> v2;
        for (int i = 1; i <= n; i++)
        {
            int temp = i;
            int k = 0;
            while (temp % 2 == 0)
            {
                k++;
                temp /= 2;
            }
            if (k > 0)
            {
                v2.push_back(k);
            }
        }
        sort(all(v2), greater<int>());
        int ans = 0;
        for (int i = 0; i < v2.size(); i++)
        {
            count += v2[i];
            ans++;
            if (count >= n)
            {
                cout << ans << endl;
                return;
            }
        }
        cout << -1 << endl;
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