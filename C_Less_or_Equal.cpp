#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (k == 0)
    {
        if (v[0] == 1)
            cout << "-1" << endl;
        else    
            cout << 1 << endl;
    }
    else
    {
        if (v[k - 1] == v[k])
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << v[k - 1] << endl;
        }
    }
}
signed main()
{
    solve();
}