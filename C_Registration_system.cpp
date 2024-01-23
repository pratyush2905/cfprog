#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
// जय श्रीराम//
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if(mp[s]==0)
        {
            cout<<"OK"<<endl;
            mp[s]++;
        }
        else
        {
            mp[s]--;
            cout<<s<<(mp[s])<<endl;
            mp[s]++;
        }
        mp[s]++;
    }
    /*for(auto it : mp)
    {
        cout<<it.first<<" "<<it.second;
    }*/
    cout<<endl;
}
signed main()
{
    int t;
    //cin >> t;
    t=1;
    while (t--)
    {
        solve();
    }
}