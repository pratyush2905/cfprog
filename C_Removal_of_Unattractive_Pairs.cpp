#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    map<char,int>mp;
    set<char>st;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
        st.insert(s[i]);
    }
    int x=st.size();
    int mx=0;
    for(auto it:mp)
    {
        mx=max(mx,it.second);
    }
    if(2*mx>n)
    {
        cout<<(2*mx-n)<<endl;
    }
    else
    {
        if(n%2==0)
        cout<<0<<endl;
        else
        {
            cout<<(n%2)<<endl;
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