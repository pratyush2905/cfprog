#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ++v[x];
    }
    int ans=0;
    for(int s=2;s<=2*n;s++)
    {
        int cur=0;
        for(int i=1;i<(s+1)/2;i++)
        {
            if(s-i>n)
            continue;
            cur+=min(v[i],v[s-i]);
        }
        if(s%2==0)
        {
            cur+=v[s/2]/2;
        }
        ans=max(ans,cur);
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