#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f=-1;
    for(int i=0;i<s.length();i++)
    {
        int a=(int)s[i];
        if(a&1==0)
        {
            f++;
            break;
        }
    }
    
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
F