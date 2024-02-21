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
    cin>>n;
    vector<char> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int f = -1;
    int c =0;
    for (int i = 0; i < n ; i++)
    {
        if(v[i] == '@')
        c++;
        else if (v[i] == '*' && v[i+1] == '*' && (i+1)<n)
        {
            f++;
            break;
        }
    }
    cout<<c<<endl;
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