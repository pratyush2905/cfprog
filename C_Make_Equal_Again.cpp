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
    vector<int> v(n);
    fr(0, n)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    int x = 0;
    /*for(auto it : mp)
    {
        x = it.first;
        break;
    }
    cout<<x<<endl;*/
    int frnt = 1, bck = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] == v[i])
            frnt++;
        else
            break;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] == v[i + 1])
            bck++;
        else
            break;
    }
    if (frnt == n)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        if (v[0] == v[n - 1])
        {
            cout << n - (frnt + bck) << endl;
        }
        else
        {
            cout<<n-(frnt + bck) + min(frnt,bck)<<endl;
        }
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