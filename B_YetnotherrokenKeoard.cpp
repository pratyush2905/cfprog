#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;

    int n = s.length();
    int cb = 0, cB = 0;

    string t="";
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'b')
        {
            cb++;
        }
        else if (s[i] == 'B')
        {
            cB++;
        }
        else
        {
            if (isupper(s[i]) && cB > 0)
            {
                cB--;
            }
            else if (islower(s[i]) && cb > 0)
            {
                cb--;
            }
            else
            {
                t+=s[i];
            }
        }
    }
    int x=t.length();
    for(int i=x-1;i>=0;i--)
    {
        cout<<t[i];
    }
    cout<<endl;
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