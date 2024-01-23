#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;
    int x=a+b;
    if(x&1)
    cout<<"Alice"<<endl;
    else
    cout<<"Bob"<<endl;
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