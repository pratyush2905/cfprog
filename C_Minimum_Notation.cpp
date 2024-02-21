#include <bits/stdc++.h>
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
    sort(all(s));
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            c++;
            s.erase(i, i + 1);
        }
    }
    n = s.length();
    int x = s[0] - '0';
    for (int i = 0; i < n; i++)
    {
        int a = s[i] - '0';
        int y = a + 1;
        if (a != x)
        {
            a = min(y, 9);
            s[i] = a + '0';
        }
    }
    for (int i = 0; i < c; i++)
    {
        s = '0' + s;
    }
    cout << s << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}