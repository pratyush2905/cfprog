#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 2)
    {
        sort(v.begin(), v.end());
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
    else
    {
        int a, b;
        int min_val = INT_MAX;
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++)
        {
            int x = abs(v[i] - v[i - 1]);
            if (x <= min_val)
            {
                min_val = min(min_val, x);
                a = (i - 1);
                b = i;
            }
        }
        // cout<<a<<" "<<b<<endl;
        vector<int> x1;
        vector<int> x2;
        for (int i = b; i < n; i++)
        {
            x1.push_back(v[i]);
        }
        for (int i = 0; i < b; i++)
        {
            x1.push_back(v[i]);
        }
        for (auto it : x1)
        {
            cout << it << " ";
        }
        cout << endl;
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