#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int c = 0;
    bool dip = 0;
    int last = v[0];
    string s1 = "";
    s1+="1";
    for (int i = 1; i < n; i++)
    {
        if (dip)
        {
            if (v[i] <= v[0] && v[i] >= last)
            {
                s1 += '1';
                last = v[i];
            }
            else
            {
                s1 += '0';
            }
        }
        else if (v[i] < last)
        {
            if (v[i] <= v[0])
            {
                dip = 1;
                s1 += '1';
                last = v[i];
            }
            else
            {
                s1 += '0';
            }
        }
        else
        {
            s1 += '1';
            last = v[i];
        }
    }
    cout << s1 << endl;
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