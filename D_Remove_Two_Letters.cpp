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
    cin>>n;
    string s;
    cin>>s;
    set<string>st;
    string temp="";
    int c = 0;
    for(int i=0;i<n-2;i++)
    {
        if(s[i]==s[i+2])
        {
            c++;
        }
    }
    cout<<n-1-c<<endl;
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