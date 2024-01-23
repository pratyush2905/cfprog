#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    if(s1==s2)
    cout<<"-1"<<endl;
    else
    cout<<max(s1.length(),s2.length())<<endl;
}
signed main()
{
    solve();
}