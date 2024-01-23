#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int>mp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(mp[s[i]]<=0)
        {
            sum+=n-i;
            mp[s[i]]++;
        }
    }
    cout<<sum<<endl;
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