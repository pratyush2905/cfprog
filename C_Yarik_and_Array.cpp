#include <bits/stdc++.h>
#define int long long
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
    int ans = INT_FAST64_MIN;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && (abs(v[i - 1] % 2) == abs(v[i] % 2)))
        {
            curr = v[i];
            ans = max(ans, curr);
        }
        else
        {
            curr = max(v[i], curr + v[i]);
            ans = max(curr, ans);
        }
    }
    cout<<ans<<endl;
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