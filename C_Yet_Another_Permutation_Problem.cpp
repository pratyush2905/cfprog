#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        set<ll>st;
        cout<<1<<" ";
        for(ll i=2;i<=n;i++)
        {
            st.insert(i);
        }
        while(st.size()!=0)
        {
            ll temp=*st.begin();
            cout<<temp<<" ";
            st.erase(temp);
            while(st.find(2*temp)!=st.end())
            {
                cout<<2*temp<<" ";
                temp=2*temp;
                st.erase(temp);
            }
        }
        cout<<endl; 
    }
}