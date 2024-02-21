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
    char c = 'a';
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==0)
        {
            cout<<c;
            mp[c]++;
            c++;
        }
        else
        {
            for(auto it : mp)
            {
                if(it.second == v[i])
                {
                    cout<<it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
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