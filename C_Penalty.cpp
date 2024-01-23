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
    int a = 0;
    int b = 0;
    bool g = true;
    vector<int> va;
    vector<int> vb;
    rep(i, 0, s.length())
    {
        if (g == true)
        {
            if (s[i] == '0')
                va.push_back(0);
            else
                va.push_back(1);
            g = false;
        }
        else
        {
            if (s[i] == '1')
                vb.push_back(1);
            else
                vb.push_back(0);
            g = true;
        }
    }
    int c1 = 5;
    int c2 = 5;
    int k1 = 0;
    rep(i, 0, va.size())
    {
        k1++;
        // cout << va[i] << vb[i];
        if (va[i] == 1)
        {
            a++;
        }
        c1--;

        if (a - b > c2)
            break;

        k1++;
        if (vb[i] == 1)
        {
            b++;
        }
        c2--;
        if (a - b > c2)
            break;
    }
    va.clear();
    vb.clear();
    rep(i, 0, s.length())
    {
        if (g == true)
        {
            if (s[i] == '1')
                va.push_back(1);
            else
                va.push_back(0);
            g = false;
        }
        else
        {
            if (s[i] == '0')
                vb.push_back(0);
            else
                vb.push_back(1);
            g = true;
        }
    }
    c1 = 5;
    c2 = 5;
    a=0,b=0;
    int k2 = 0;
    rep(i, 0, va.size())
    {
        k2++;
        // cout << va[i] << vb[i];
        if (va[i] == 1)
        {
            a++;
        }
        c1--;

        if (b - a > c1)
            break;

        k2++;
        if (vb[i] == 1)
        {
            b++;
        }
        c2--;
        if (b - a > c1)
            break;
    }
    cout<<min(k1,k2)<<endl;
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