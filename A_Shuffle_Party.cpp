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
    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        int x = 2;
        while(x<n)
        {
            x=x*2;
        }
        if(x > n)
        cout<<x/2<<endl;
        else
        cout<<x<<endl;
        return;
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