#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n;
    cin>>n;
    char a[n][n];
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            cin>>a[i][j];
        }
    }
    int c=0;
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            if(a[i][j]=='1')
            c++;
        }
        if(c == 1)
        {
            cout<<"TRIANGLE"<<endl;
            return;
        }
        c=0;
    }
    cout<<"SQUARE"<<endl;
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