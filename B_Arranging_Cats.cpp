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
    string s;
    cin >> s;
    string f;
    cin >> f;
    int shift = 0, req = 0, opn = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' && f[i] == '0')
        {
            shift++;
        }
        else if (s[i] == '0' && f[i] == '1')
        {
            req++;
        }
    }
    //cout<<shift<<" "<<req<<endl;
    /*if (shift >= req)
    {
        if (req == 0)
        {
            opn += shift;
        }
        else
        {
            opn += req;
            shift -= req;
            if (shift > 0)
                opn += shift;
        }
    }
    else if (shift < req)
    {
        if (shift == 0)
        {
            opn += req;
        }
        else
        {
            opn += shift;
            req -= shift;
            if (req > 0)
                opn += req;
        }
    }*/
    cout << max(shift,req) << endl;
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