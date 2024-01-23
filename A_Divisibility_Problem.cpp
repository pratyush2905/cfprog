#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    if(a%b==0)
    {
        cout<<0<<endl;
    }
    else 
    {

        cout<<(b-(a%b))<<endl;
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