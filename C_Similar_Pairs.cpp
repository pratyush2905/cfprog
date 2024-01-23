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
    int e = 0;
    int o=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            e++;
        else
            o++;
    }

    if (e % 2 == 0 && o % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        sort(v.begin(), v.end());
        int f = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] - v[i] == 1)
            {
                f++;
                break;
            }
        }
        if(f>=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
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