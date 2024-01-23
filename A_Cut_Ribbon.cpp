#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
// जय श्रीराम//
using namespace std;
void solve()
{
    double n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> v;
    int ans = INT_MIN;
    for (int i = 0; i <= 4000; i++)
    {
        for (int j = 0; j <= 4000; j++)
        {
            int mid = a * i + b * j;
            double third = n - mid;
            if(third<0)
            break;
            double z = (third/(double)c);
            if(z==(int)z)
            {
                int sum=i+j+z;
                ans=max(ans,sum);
            }
        }
    }
    cout << ans;
}
signed main()
{
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}