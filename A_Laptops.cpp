#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        mp.insert({a,b});
    }
    ll c=-1;
    vector<ll>q;
    for(auto it:mp)
    {
        q.push_back(it.second);
        //cout<<it.first<<" "<<it.second<<endl;
    }
    for(int i=0;i<q.size()-1;i++)
    {
        if(q[i]>q[i+1])
        {
            c++;
            break;
        }
    }
    if(c>=0)
    cout<<"Happy Alex"<<endl;
    else
    cout<<"Poor Alex"<<endl;
}