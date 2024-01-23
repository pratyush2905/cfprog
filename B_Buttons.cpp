#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        int s = 0;
        int i = 1;
        while ((n - i) != 0)
        {
            s += (n - i) * i;
            i++;
        }
        cout << (s + n) << endl;
    }
}