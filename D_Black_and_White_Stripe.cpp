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
    string s;
    cin >> s;
    int w=0;int b=0;int seg=0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        seg++;
        if(s[i]=='B')
        b++;
        else if (s[i]=='W')
        w++;
         
        if(seg>=k)
        {
            if(s[i-k]=='B')
            b--;
            else if (s[i-k]=='W')
            w--;
            ans=min(ans,w);
            seg--;
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