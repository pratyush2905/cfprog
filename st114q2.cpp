#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int cur_min=v[0];
    int c=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]<cur_min)
        c++;
        else
        {
            cur_min=v[i];
        }
    }
    cout<<c<<endl;
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