#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
int solve(int n)
{
    if (n < 10)
    {
        return (n * (n + 1)) / 2;
    }
    else
    {
        int d = log10(n);
        int a[d + 1];
        a[0] = 0;
        a[1] = 45;
        for (int i = 2; i <= d; i++)
        {
            a[i] = 10 * a[i - 1] + 45 * ceil(pow(10, i - 1));
        }
        int val = ceil(pow(10, d));
        int f = n / val;
        return (f * a[d]) + (f * (f - 1) / 2) * val + (f * (1 + n % val)) + (solve(n % val));
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<solve(n)<<endl;
    }
}