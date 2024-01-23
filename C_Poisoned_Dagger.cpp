#include <bits/stdc++.h>
#define int long long
using namespace std;
int dmgCal(vector<int> &v, int k)
{
    int t = 0;
    int dmg = 0;
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        dmg = dmg + k;
        t = v[i] + k - 1;
        if (t >= v[i + 1])
        {
            // t = v[i + 1];
            dmg = dmg - ((t - v[i + 1]) + 1);
        }
        // cout << dmg << endl;
    }
    dmg += k;
    return dmg;
}
int isValid(vector<int> &v, int hp)
{
    int start = 1;
    int end = 1e18;
    int ans=0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (dmgCal(v, mid) == hp)
            {
                ans=mid;
                break;
            }
        else if (dmgCal(v, mid) > hp)
            {
                ans=mid;
                end = mid - 1;
            }
        else if (dmgCal(v, mid) < hp)
            start = mid + 1;
    }
    return ans;
}
void solve()
{
    int n, h;
    cin >> n >> h;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    cout << isValid(v, h) << endl;
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