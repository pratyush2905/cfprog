#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        c++;
    }
    if(c==k)
    {
        cout<<0<<endl;
    }
    else if(c>k)
    {
        cout<<1<<endl;
        cout<<(c-k)<<" "<<"A"<<endl;
    }
    else if(k>c)
    {
        cout<<1<<endl;
        cout<<(k-c)<<" "<<"B"<<endl;
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