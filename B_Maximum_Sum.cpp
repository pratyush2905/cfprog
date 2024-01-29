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
    int n, k;
    cin >> n >> k;
    vector<int> v, pref(n + 1);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(all(v));
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + v[i];
    }
    int mx = 0;
    for (int i = 0; i <= k; i++)
    {
        mx=max(mx,pref[n-i]-pref[2*(k-i)]);
    }
    cout<<mx<<endl;
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