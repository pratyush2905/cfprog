#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] <= 0)
        {   
            neg++;
            v[i]=v[i]*(-1);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += abs(v[i]);
    }
    if (neg % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        sort(v.begin(),v.end());
        cout<<(sum-2*v[0])<<endl;
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