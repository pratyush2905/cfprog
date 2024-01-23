#include <bits/stdc++.h>
#define int unsigned long long
using namespace std;
int isValid(vector<int> v, int w, int a)
{
    int sum=0;
    int n=v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] + 2 * w > 1e9)
            return 2;
        sum += (v[i] + 2 * w) * (v[i] + 2 * w);
        if (sum > 1e18)
            return 2;
    }
    if (sum == a)
        return 0;
    else if (sum > a)
        return 2;
    else
        return -1;
}

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int start = 1;
    int end = 9 * 1e8;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isValid(v, mid, c) == 0)
        {
            cout << mid << endl;
            return;
        }
        else if (isValid(v, mid, c) == -1)
        {
            start = mid + 1;
        }
        else if (isValid(v, mid, c) == 2)
        {
            end = mid - 1;
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