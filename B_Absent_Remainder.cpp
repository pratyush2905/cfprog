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
    sort(v.begin(),v.end());
    int k=n/2;
    int temp=0;
    for(int i=1;i<n;i++)
    {
        if(temp<k)
        {
            cout<<v[i]<<" "<<v[0]<<endl;
            temp++;
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