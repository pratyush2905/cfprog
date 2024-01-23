#include <bits/stdc++.h>
#define int long long
using namespace std;
int isPerfectSquare(int x)
{
    if (x >= 0)
    {
        int y = sqrt(x);
        return (y * y == x);
    }
    return 0;
}
void solve()
{
    int x;
    cin >> x;
    if (x%2==0 && isPerfectSquare(x/2) == 1)
    {
        cout << "YES" << endl;
        return;
    }
    else if(x%4==0 && isPerfectSquare(x/4)==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout<<"NO"<<endl;
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