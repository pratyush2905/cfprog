#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int l=1;
    int r=1e18;
    int ans;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        int p=mid-(mid/n);
        if(mid%n==0)
        {
            if(p>=k)
            r=mid-1;
            else
            l=mid+1;
            continue;
        }
        if(p==k)
        {
            ans=mid;
            break;
        }
        else if(p>k)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}