#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        c++;
    }
    if(c==1)
    {
        cout<<"BOB"<<endl;
    }
    else if(c&1)
    cout<<"ALICE"<<endl;
    else
    cout<<"BOB"<<endl;
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