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
    cin>>s;
    int c = 0;
    for (int i = 0; i <= n - 3;)
    {
        if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
        {
            c++;
            i += 3;
        }
        else if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
        {
            c++;
            i += 3;
        }
        else
            i++;
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