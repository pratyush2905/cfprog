#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
// जय श्रीराम //
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }
    int min_v,ans=0;
    for(int i = n-1;i>=0;)
    {
        if(s[i]=='1')
        {
            min_v=v[i];
            while(i>=0)
            {
                min_v=min(min_v,v[i]);
                if(s[i]=='1')
                {
                    ans+=v[i];
                    min_v=min(min_v,v[i]);
                    i--;
                }
                else
                {
                    ans+=v[i];
                    ans-=min_v;
                    i--;
                    break;
                }
            }
        }
        else
        {
            i--;
        }
    }
    cout<<ans<<endl;
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