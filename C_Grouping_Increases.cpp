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
    cin>>n;
    int v[n];
    rep(i,0,n)
    {
        cin>>v[i];
    }
    vector<int>v1,v2;
    int p=0;
    rep(i,0,n)
    {
        if(v1.size()==0)
        v1.push_back(v[i]);
        else if(v2.size()==0)
        {
            if(v[i]<=v1.back())
            v1.push_back(v[i]);
            else
            v2.push_back(v[i]);
        }
        else
        {
            if(v1.back()<v2.back())
            {
                swap(v1,v2);
            }
            if(v[i]<=v2.back())
            {
                v2.push_back(v[i]);
            }
            else if(v[i]<=v1.back())
            {
                v1.push_back(v[i]);
            }
            else
            {
                v2.push_back(v[i]);
                p++;
            }
        }
    }
    cout<<p<<endl;
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