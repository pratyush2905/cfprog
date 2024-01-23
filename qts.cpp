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
    cin >> n;
    vector<int> v(n);
    fr(0, n)
        cin >> v[i];
    int t;
    cin >> t;
    int i = 0;
    while (i < n)
    {
        int x=t-v[i];
        auto it = find(v.begin(),v.end(),x);
        if(it!=v.end())
        {
            int index=it-v.begin()+1;
            cout<<i<<" "<<index;
            break;
        }
        i++;
    }
}
signed main()
{
    solve();
}