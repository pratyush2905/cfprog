#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        while (n > 0)
        {
            if (x < 20)
                break;
            else
            {
                int a = floor(x / 2) + 10;
                x = a;
                n--;
            }
        }

        x -= (m * 10);
        if (x > 0)
            cout << "NO" << endl;
        else if (x <= 0)
            cout << "YES" << endl;
    }
}
