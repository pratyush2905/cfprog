#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        int k = ceil((double)(a[i] / a[i + 1]));
        a[i] /=  k;
        c += k;
    }
    cout << c << endl;
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