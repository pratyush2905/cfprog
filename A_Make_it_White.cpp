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
    string s;
    cin >> s;
    int start_ind = 0, end_ind = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            if (start_ind == 0)
            {
                start_ind = i+1;
                end_ind = i+1;
            }
            else
            {
                end_ind = i+1;
            }
        }
    }
    cout<<abs(end_ind-start_ind+1)<<endl;
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