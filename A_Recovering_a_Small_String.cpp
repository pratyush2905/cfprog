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
    if (n <= 28)
    {
        cout << "aa";
        n -= 2;
        char x = 'a' + n - 1;
        cout << x << endl;
    }
    else
    {
        if (n <= 53)
        {
            cout << "a";
            n -= 1;
            int z = n - 26;
            char x = 'a' + z - 1;
            cout << x;
            n -= z;
            x = 'a' + n - 1;
            cout << x << endl;
            /**/
        }
        else
        {
            int z = n - 52;
            char x = 'a' + z - 1;
            cout<<x<<"zz"<<endl;
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