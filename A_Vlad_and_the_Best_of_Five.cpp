#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < 5; i++)
    {
        if(s[i]=='A')
        a++;
        else
        b++;
    }
    if(a>b)
    cout<<"A"<<endl;
    else
    cout<<"B"<<endl;
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