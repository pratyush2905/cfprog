#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ans=0;
    while(n>1)
    {
        int h=(-1+sqrt(1+24*n))/6;
        int x=(3*pow(h,2)+h)/2;
        n-=x;
        ans++;
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