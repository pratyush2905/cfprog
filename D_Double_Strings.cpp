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
    vector<string> v(n);
    map<string, bool> mp;
    fr(0, n)
    {
        cin >> v[i];
        mp[v[i]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i].size() == 1)
        {
            cout << 0;
            continue;
        }
        bool f = false;
        for (int j = 0; j < v[i].size(); j++)
        {
            string a = v[i].substr(0, j);
            string b = v[i].substr(j, v[i].size() - 1);
            if (mp[a]==true && mp[b]==true)
            {
                f=true;
                break;
            }
        }
        if(f==true)
        cout<<1;
        else
        cout<<0;
    }
    cout<<endl;
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