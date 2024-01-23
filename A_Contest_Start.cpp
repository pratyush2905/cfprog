#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,x,t;
    cin>>n>>x>>t;
    int m=(t/x);

    if(n<m)
    {
        cout<< ((n-1)*n)/2 <<endl;
    }
    else
    {
        int ans=n*m;
        ans-=((m+1)*m)/2;
        cout<<ans<<endl;
    }
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