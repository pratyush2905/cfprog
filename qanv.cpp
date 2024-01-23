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
    int f = -1;
    int neg = 0;
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            f++;
        else if (v[i] < 0)
        {
            neg++;
            ind = i;
        }
    }
    if (f >= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        if (n == 1 && v[0] > 0)
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
        else if (n == 1 && v[0] < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (neg % 2 == 0)
            {
                cout << 1 << endl;
                cout << (ind + 1) << ' ' << 0 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
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