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
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=c[i] && b[i]!=c[i])
        {
            f=true;
            break;
        }
    }
    // cout<<f<<" "<<c1<<endl;
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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