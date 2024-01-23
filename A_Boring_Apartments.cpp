#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            int f = x % 10;
            int ans = (f - 1) * 10;
            string s = to_string(x);
            int l = s.length();
            if (l == 4)
            {
                ans += 10;
            }
            else if (l == 3)
            {
                ans += 6;
            }
            else if (l == 2)
            {
                ans += 3;
            }
            else
                ans += 1;
            cout << ans << endl;
        }
    }
}