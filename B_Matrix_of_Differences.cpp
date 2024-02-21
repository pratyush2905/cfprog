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
    int i = 1, j = n * n;
    vector<int> v;
    while (i <= j)
    {
        v.push_back(i++);
        if (j >= i)
            v.push_back(j--);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i * n + j] << " ";
        }
        cout << endl;
        i++;
        if (i < n)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<v[(i+1)*n-j-1]<<" ";
            }
            cout<<endl;
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