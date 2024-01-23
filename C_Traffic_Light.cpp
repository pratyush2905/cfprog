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
    char ch;
    cin >> n >> ch;
    string s;
    cin >> s;
    if (ch == 'g')
    {
        cout << 0 << endl;
    }
    else
    {
        int first = -1 ;int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
            {
                first = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ch)
            {
                int c = 0, f = 0;
                for (int j = i + 1; j < n; j++)
                {
                    c++;
                    if (s[j] == 'g')
                    {
                        f++;
                        break;
                    }
                }
                i = i + c;
                if(f)
                {
                    ans=max(ans,c);
                }
                else
                {
                    ans=max(ans,c+1+first);
                }
            }
        }
        cout<<ans<<endl;
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