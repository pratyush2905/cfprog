#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll v[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 2)
        cout << "Yes" << endl;
    else
    {
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            st.insert(v[i]);
        }
        if(st.size()==1)
        {
                cout<<"Yes"<<endl;
        }
        else if(st.size()==2)
        {
            auto it = st.begin();
            ll arr[2];
            ll k=0;
            while (it != st.end() && k<2)
            {
                ll c=0;
                for(ll i=0;i<n;i++)
                {
                    if(v[i]==*it)
                    c++;
                }
                arr[k]=c;
                k++;
                it++;
            }
            ll ans=abs(arr[0]-arr[1]);
            if(ans==0 || ans==1)
            {
                cout<<"Yes"<<endl;
            }
            else
            cout<<"No"<<endl;
        }
        else
        cout<<"No"<<endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}