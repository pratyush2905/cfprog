#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int s=0;
    while(n!=0)
    {
        s+=n;
        n/=2;
    }
    cout<<s<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}