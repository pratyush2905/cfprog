#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>pref(n);
    pref[0]=v[0];
    vector<int>maxi(n);
    maxi[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pref[i]=pref[i-1]+v[i];
        maxi[i]=max(maxi[i-1],v[i]);

    }
    /*for(auto it : pref)
    {
        cout<<it<<" ";
    }
    cout<<endl;*/
    while(q--)
    {
        int a;
        cin>>a;
        int ind=upper_bound(maxi.begin(),maxi.end(),a)-maxi.begin();
        ind--;
        if(ind == -1)
        {
            cout<<0<<" ";
        }
        else
        {
            cout<<pref[ind]<<" ";
        }
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