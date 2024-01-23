#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int s;
    cin>>s;
    int pw=1e9;
    int ans=0;
    while(s>0)
    {
        while(s<pw)
        {
            pw/=10;
        }
        ans+=pw;
        s=(s-pw)+floor(pw/10);
    }
    cout<<ans<<endl;
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