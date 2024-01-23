#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int ans=1;
    if(k==0)
    {
        cout<<1<<endl;
    }
    else
    {
        while(k!=0)
        {
            ans=ans*n;
            ans=ans%mod;
            k--;
        }
        cout<<ans<<endl;
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