#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int p = 0, neg =0 ;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
            p++;
        else if (s[i] == '-')
            neg++;
    }
    if (neg == p)
        cout << 0 << endl;
    else if (neg > p)
    {
        neg = neg - p;
        cout << neg << endl;
    }
    else if (neg < p)
    {
        p = p - neg;
        cout << p << endl;
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