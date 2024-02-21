#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    if (k <= (2*n-2)*2)
    {
        cout << (k+1)/2 << endl;
    }
    else
    {
        int ans = (2*n-2)+(k-((2*n-2)*2));
        cout<<ans<<endl;
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