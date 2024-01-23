#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    stack<char>st;
    for(auto e:s)
    {
        if(e=='B' && st.empty()==false)
        {
            st.pop();
        }
        else
        {
            st.push(e);
        }
    }
    cout<<st.size()<<endl;
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