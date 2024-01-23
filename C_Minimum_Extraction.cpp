#include <bits/stdc++.h>
#define int long long
using namespace std;
int fun(vector<int> &v)
{
    int x = *min_element(v.begin(), v.end());
    auto it = min_element(v.begin(), v.end());
    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        v[i] -= x;
    }
    v.erase(it);
    x = *min_element(v.begin(), v.end());
    return x;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1)
    {
        cout << v[0] << endl;
    }
    else
    {
        int min_ele = *min_element(v.begin(), v.end());
        int a = fun(v);
        while (min_ele < a)
        {
            min_ele = a;
            a = fun(v);
        }
        cout << min_ele << endl;
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