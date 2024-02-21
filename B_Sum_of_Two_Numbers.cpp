#include <bits/stdc++.h>
#define int long long
// जय श्रीराम //
using namespace std;
int digSum(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 20 != 9)
        {
            int a = n / 2;
            int b = n - a;
            if (abs(digSum(a) - digSum(b)) <= 1)
                cout << a << " " << b << endl;
            else
            {
                int x = max(a, b);
                int y = min(a, b);
                y += x / 2;
                x -= x / 2;
                cout << x << " " << y << endl;
            }
        }
        else
        {
            for (int i = 0; i <= n / 2; i++)
            {
                int a = i;
                int b = n - i;
                if (abs(digSum(a) - digSum(b)) <= 1)
                {
                    cout << a << " " << b << endl;
                    break;
                }
            }
            // cout<<endl;
        }
    }
}