#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < 10)
        {
            v[i] = x;
            sum += x;
        }
        else
        {
            v[i] = x % 10;
            sum += v[i];
        }
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    int f = -1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                int x = i + j + k;
                if (x % 10 == 3)
                {
                    if (mp[i] > 0)
                    {
                        mp[i]--;
                        if (mp[j] > 0)
                        {
                            mp[j]--;
                            if (mp[k] > 0)
                            {
                                mp[k]--;
                                f++;
                                cout << "YES" << endl;
                                return;
                            }
                            else
                            {
                                mp[j]++;
                                mp[i]++;
                            }
                        }
                        else
                            mp[i]++;
                    }
                }
            }
        }
    }
    if (f < 0)
    {
        cout << "NO" << endl;
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