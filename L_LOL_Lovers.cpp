#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 2)
    {
        if (s[0] != s[1])
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
    else
    {
        int i = 1;
        int k=1;
        while (i < n)
        {
            string st = s.substr(0, i);
            string st2 = s.substr(i + 1,);
            int lc1 = 0, lc2 = 0, oc1 = 0, oc2 = 0;
            for (int i = 0; i < st.length(); i++)
            {
                if (s[i] == 'L')
                    lc1++;
                else
                    oc1++;
            }
            for (int i = 0; i < st2.length(); i++)
            {
                if (st2[i] == 'L')
                    lc2++;
                else
                    oc2++;
            }
            if (lc1 != lc2 && oc1 != oc2)
            {
                cout << i << endl;
                return;
            }
            else
            {
                i--;
            }
        }
        cout << -1;
    }
}
signed main()
{
    solve();
}