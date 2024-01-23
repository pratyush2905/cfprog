#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);
    fr(0, n)
    {
        cin >> v1[i];
    }
    fr(0, m)
    {
        cin >> v2[i];
    }
    sort(all(v1));
    sort(all(v2));
    int add = 0;
    int la=0,ra=n-1,lb=0,rb=m-1;
    while(la<=ra)
    {
        int left=abs(v1[la]-v2[rb]);
        int right = abs(v2[lb]-v1[ra]);
        if(left>=right)
        {
            add+=left;
            la++;
            rb--;
        }
        else
        {
            add+=right;
            ra--;
            lb++;
        }
    }
    cout<<add<<endl;
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