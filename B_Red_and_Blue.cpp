#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int pref_R[n]={0};
    int pref_B[m]={0};
    pref_R[0] = r[0];
    pref_B[0] = b[0];
    for (int i = 1; i < n; i++)
    {
        pref_R[i] = pref_R[i - 1] + r[i];
    }
    for (int i = 1; i < m; i++)
    {
        pref_B[i] = pref_B[i - 1] + b[i];
    }

    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        int s=pref_R[i];
        maxx=max(maxx,s);
        for (int j = 0; j < m; j++) 
        {
            s = pref_R[i] + pref_B[j];
            if (s > maxx)
                maxx = s;
            maxx=max(maxx,pref_B[j]);
        }
    }
    cout << maxx << endl;
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