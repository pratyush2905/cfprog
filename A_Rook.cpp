#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    char c;
    int d;
    cin>>c>>d;
    for(int i=1;i<d;i++)
    {
        cout<<c<<i<<endl;
    }
    for(int i=d+1;i<=8;i++)
    {
        cout<<c<<i<<endl;
    }
    for(char i='a';i<c;i++)
    {
        cout<<i<<d<<endl; 
    }
    for(char i=c+1;i<='h';i++)
    {
        cout<<i<<d<<endl;
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