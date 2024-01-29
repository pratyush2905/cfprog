#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
// जय श्रीराम //
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
void solve()
{
    int x, n;
    cin >> x >> n;
    int ans=1;
    for (int i = 1; i * i <= n; i++)
    {
        if(n%i==0)
        {
            int a =n/i;
            if(a>=x)
            {
                ans=max(ans,i);
            }
            else
            break;

        }
    }
    cout<<ans<<endl;
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