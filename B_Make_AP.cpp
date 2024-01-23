#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll na = 2 * b - c;
    if (na % a == 0 && na != 0 && na >= a)
    {
        cout << "YES" << endl;
        return ;
    }
    ll nb = a + c;
    if (nb % (2 * b) == 0 && nb != 0 && nb >= b)
    {
        cout << "YES" << endl;
        return;
    }
    ll nc = 2 * b - a;
    if (nc % c == 0 && nc != 0 && nc >= c)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
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
