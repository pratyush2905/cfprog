#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                x++;
            else
                y++;
        }
        if (x == y)
        {
            cout << 0 << endl;
            return;
        }
        else
        {
            string temp = s;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0' && y > 0)
                {
                    s[i] = '1';
                    y--;
                }
                else if (s[i] == '1' && x > 0)
                {
                    s[i] = '0';
                    x--;
                }
            }
            int j = 0, c = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != temp[j])
                {
                    j++;
                    continue;
                }
                else
                {
                    c++;
                }
            }
            cout << c << endl;
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