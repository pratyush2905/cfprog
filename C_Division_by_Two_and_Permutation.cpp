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
        while (v[i] > n)
        {
            v[i] /= 2;
        }
    }
    sort(v.begin(), v.end());
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= n && mp[v[i]] == 0)
        {
            mp[v[i]] = 1;
        }
        else
        {
            while (v[i] > 0)
            {
                if (v[i] <= n && mp[v[i]] == 0)
                {
                    mp[v[i]] = 1;
                    break;
                }
                v[i]/=2;
            }
            if(v[i]<=0)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(mp[i]==0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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