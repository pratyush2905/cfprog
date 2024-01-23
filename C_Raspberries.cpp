#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{    
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    int x,p=1;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        p*=x;
        p%=k;

        mp[x%k]++;
    }    
    if(p%k==0)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        if(k==2)
        {
            cout<<1<<endl;
            return;
        }
        if(k==3)
        {
            if(mp[2])
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }
        if(k==4)
        {
            if(mp[3])
            cout<<1<<endl;
            else if(mp[2]&& mp[1])
            cout<<1<<endl;
            else if(mp[2])
            cout<<2<<endl;
            else if(mp[1]>1)
            cout<<2<<endl;
            else if(mp[1])
            cout<<3<<endl;
        }
        if(k==5)
        {
            if(mp[4])
            cout<<1<<endl;
            else if(mp[3])
            cout<<2<<endl;
            else if(mp[2])
            cout<<3<<endl;
            else
            cout<<4<<endl;
        }
    }
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}