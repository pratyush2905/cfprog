#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << "YES" << endl;
    }
    else if (n==2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(s[n-1]==s[n-2])
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
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