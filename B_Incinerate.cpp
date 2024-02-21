#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        mp[v1[i]]=v2[i];
    }
    for(auto it :mp)
    {
        cout<<it.first<<" "<<it.second;
        cout<<endl; 
    }
    cout<<endl;
    
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