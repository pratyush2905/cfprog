#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    if (m % n != 0)
    {
        cout << -1 << endl;
    }
    else if (m == n)
    {
        cout << 0 << endl;
    }
    else
    {
        int d = m / n;
        int c = 0;
        while (d != 0)
        {
            if (d % 2 == 0)
            {
                d /= 2;
                c++;
            }
            else if (d % 3 == 0)
            {
                d /= 3;
                c++;
            }
            else
                break;
        }
        if (d == 1)
            cout << c << endl;
        else
            cout << "-1" << endl;
    }
}
int main()
{
    solve();
}