#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    if(m<=(n/k))
    {
        cout<<m<<endl;
    }
    else
    {
        double a=n/k;
        double b=ceil((m-a)/(k-1));
        cout<<(a-b)<<endl;
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