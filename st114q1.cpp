#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int tgt = n / 2 + 1;
    int rem = n;
    int pnt= 0;
    string temp="";
    for(auto it:s)
    {
        rem--;
        if(rem>=tgt)
        {
            temp.push_back('P');
            if(it=='R')
            tgt--;
        }
        else
        {
            if(it=='S')
            temp.push_back('R');
            else if(it=='R')
            temp.push_back('P');
            else if(it=='P')
            temp.push_back('S');
            tgt--;
        }
    }
    cout<<temp<<endl;
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