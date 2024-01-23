#include <bits/stdc++.h>
#define int long long
using namespace std;
/*int isValid(vector<int> v, int x)
{
    int n = v.size() - 1;
    int start = 0;
    int end = n;
    int res = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] >= x)
        {
            res = mid;
            end = mid - 1;
        }
        else if (v[mid] < x)
        {
            start = mid + 1;
        }
    }
    return res;
}*/

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    vector<int> psum(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        psum[i] = sum;
    }
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(psum.begin(),psum.end(),x)-psum.begin();
        if (it == n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << it+1  << endl;
        }
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