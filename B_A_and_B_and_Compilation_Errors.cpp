#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int s1 = 0, s2 = 0, s3 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1 += x;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        s2 += x;
    }
    cout << (s1 - s2) << endl;
    for (int i = 0; i < n-2; i++)
    {
        int x;
        cin >> x;
        s3 += x;
    }
    cout<<(s2-s3)<<endl;
}
signed main()
{
    solve();
}