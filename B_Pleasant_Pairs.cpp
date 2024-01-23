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
    vector<pair<int,int>>v(n);
    fr(0,n)
    {
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(all(v));
    int c=0;
    fr(0,n)
    {
        rep(j,i+1,n)
        {
            if(v[i].first*v[j].first >=2*n)
            break;
            if(v[i].first*v[j].first == (v[i].second + v[j].second))
            {
                c++;
            }
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