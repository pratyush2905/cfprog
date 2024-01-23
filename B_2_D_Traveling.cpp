#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<int>x(n+1);
    vector<int>y(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }
    int st_major=LLONG_MAX/2,end_major=LLONG_MAX/2;
    int ans=abs(x[a]-x[b])+abs(y[a]-y[b]);
    for(int i=1;i<=k;i++)
    {
        int ans1=abs(x[a]-x[i])+abs(y[a]-y[i]);
        int ans2=abs(x[b]-x[i])+abs(y[b]-y[i]);
        st_major=min(st_major,ans1);
        end_major=min(end_major,ans2);
    }
    ans=min(ans,(st_major+end_major));
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