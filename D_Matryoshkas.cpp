#include <bits/stdc++.h>
#define ll long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    int i,j;
    ll a[n];
    vector<pair<ll, ll>> b;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    reverse(a, a + n);

    for (i = 0; i < n;)
    {
        j = i;

        while (i < n && a[i] == a[j])
        {
            i++;
        }

        b.push_back({a[j], i - j});
    }

    n = b.size();

    ans = b[0].second;

    for (i = 1; i < n; i++)
    {
        if (b[i].first + 1 == b[i - 1].first)
        {
            ans = ans + max(b[i].second - b[i - 1].second, 0ll);
        }
        else
        {
            ans = ans + b[i].second;
        }
    }

    cout << ans << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}