#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
// जय श्रीराम //
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> pref_sum(n + 1, 0);
    for (int i = n - k + 1; i <= n; i++)
    {
        cin >> pref_sum[i];
    }
    vector<int> a(n + 1);
    if (n == 1 or k == 1)
    {
        cout << "Yes" << endl;
        return;
    }
    for (int i = n; i >= n - k + 2; i--)
    {
        a[i] = pref_sum[i] - pref_sum[i - 1];
    }
    bool flag = true;
    for (int i = n - k + 2; i < n; i++)
    {
        if (a[i + 1] < a[i])
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
    {
        cout << "No" << endl;
        return;
    }
    for (int i = n - k + 1; i > 1; i--)
    {
        a[i] = a[i + 1];
        pref_sum[i - 1] = pref_sum[i] - a[i];
    }
    a[1] = pref_sum[1];
    flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (a[i + 1] < a[i])
        {
            flag = false;
            break;
        }
    }
    if(flag == true)
    {
        cout<<"Yes"<<endl;
        return;
    }
    else
    {
        cout<<"No"<<endl;
        return;
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