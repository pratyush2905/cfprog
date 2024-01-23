#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
void solve()
{
    int n, q;
    cin >> n >> q;
    ll a[n], b[q];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }
    set<ll> st;
    for (ll i = 0; i < q; i++)
    {
        if (st.count(b[i])!=0)
            continue;
        st.insert(b[i]);
        for (ll j = 0; j < n; j++)
        {
            if (a[j] % (1 << b[i]) == 0)
                a[j] += (1 << (b[i] - 1));
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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