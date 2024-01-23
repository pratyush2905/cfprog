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
    vector<int> v(n);
    fr(0, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    /*for(auto it :v )
    cout<<it<<" ";*/
    int as = 0;
    int bs = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (c % 2 == 0)
        {
            if (v[i] % 2 == 0)
            {
                as += v[i];
            }
        }
        else
        {
            if (v[i] % 2 != 0)
            {
                bs += v[i];
            }
        }
        c++;
    }
    if (as > bs)
        cout << "Alice" << endl;
    else if (as == bs)
        cout << "Tie" << endl;
    else
        cout << "Bob" << endl;
    // cout << endl;
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