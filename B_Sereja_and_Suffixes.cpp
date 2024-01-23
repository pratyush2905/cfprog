#include <bits/stdc++.h>
using namespace std;
#define ll long long
set<ll>st;
int main()
{
    ll n,m,s1[100009];
    cin>>n>>m;
    set<ll>st;
    ll i;
    for(i=1;i<=n;i++)
    {
        cin>>s1[i];
    }
    for(i=n;i>0;i--)
    {
        st.insert(s1[i]);
        s1[i]=st.size();
    }
    ll q;
    for(i=1;i<=m;i++)
    {
        cin>>q;
        cout<<s1[q]<<endl;
    }   
}