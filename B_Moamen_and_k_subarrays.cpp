#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    map<int,int>mp;
    fr(0,n)
    {
        cin>>v[i];
        mp[v[i]]=i;
    }
    sort(all(v));
    int cnt=1;
    int ind=mp[v[0]];
    for(int i=1;i<n;i++)
    {
        int x=mp[v[i]];
        if(x!=ind+1)
        cnt++;
        ind=x;
    }
    if(cnt<=k)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
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