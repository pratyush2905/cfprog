#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int n = 1e4 + 1;

bool perfect(ll x)
{
    ll tmp = cbrt(x);
    while (tmp * tmp * tmp > x)
    {
        tmp--;
    }
    while (tmp * tmp * tmp < x)
    {
        tmp++;
    }
    if (tmp * tmp * tmp == x)
        return true;
    else
        return false;
}
void solve()
{
    ll x;
    cin >> x;
    for (ll a = 1; a < n; a++)
    {
        ll cba = a * a * a;
        ll cbb = x - cba;
        if (cbb <= 0)
            break;
        if (perfect(cbb)==true)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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