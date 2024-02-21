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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int moves = 0;
    vector<pair<int,int>>vp;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            int x = v[i] + v[i + 1];
            if (x % 2 == 0)
            {
                v[i]=v[i+1];
            }
            else
            {
                v[i+1]=v[i];
            }
            moves++;
            vp.push_back({v[i],v[i+1]});
        }
    }
    cout<<moves<<endl;
    for(auto it : vp)
    {
        cout<<it.first<<" "<<it.second<<endl;
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