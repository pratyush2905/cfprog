#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>lc(n);
    vector<int>rc(m);
    fr(0,n)
    {
        cin>>lc[i];
    }
    fr(0,m)
    {
        cin>>rc[i];
    }
    int c=0;
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            if(rc[j]+lc[i]<=k)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
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