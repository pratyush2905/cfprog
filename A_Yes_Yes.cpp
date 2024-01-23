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
    int n = s.length();
    int f = -1;
    if (n == 1)
    {
        if (s[0] == 'Y' || s[0] == 'e' || s[0] == 's')
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'Y')
            {
                if (s[i - 1] != 's')
                {
                    f++;
                    break;
                }
            }
            else if (s[i] == 'e')
            {
                if (s[i - 1] != 'Y')
                {
                    f++;
                    break;
                }
            }

            else if (s[i] == 's')
            {
                if (s[i - 1] != 'e')
                {
                    f++;
                    break;
                }
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        if (f < 0)
            cout << "YES" << endl;
        else if (f >= 0)
            cout << "NO" << endl;
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