#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rev(i, a, b) for (int i = a; i >= b; i--)
#define all(x) (x).begin(), (x).end()
#define arr(a,n)      rep(i,0,n) cin>>a[i]
#define mod 1000000007
// जय श्रीराम //
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    arr(a, n);
    map<int, int> mp;
    rep(i, 0, n) mp[a[i]]++;
    rev(i, n - 1, 0)
    {
        while (i > 0 && a[i] == a[i - 1])
        {
            mp[a[i]]--;
            i--;
        }
        mp[a[i]]--;
        if (mp[a[i]] == 0)
            mp.erase(a[i]);
        if (mp.count(a[i]))
        {
            cout << mp.size() << endl;
            return;
        }
        if (i && a[i - 1] > a[i])
        {
            cout << mp.size() << endl;
            return;
        }
    }
    cout << 0 << endl;
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