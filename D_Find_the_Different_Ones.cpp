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
    fr(0, n)
    {
        cin >> v[i];
    }
    vector<int> b(n+1);
    b[n] = n + 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] != v[i + 1])
        {
            b[i] = i + 1;
        }
        else
        {
            b[i] = b[i + 1];
        }
    }
    /*for (auto it : b)
    {
        cout << it << " ";
    }
    cout << endl;*/
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if(b[l]<=r)
        {
            cout<<(l+1)<<" "<<(b[l]+1)<<endl;
        }
        else
        {
            cout<<-1<<" "<<-1<<endl;
        }
    }
    cout << endl;
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