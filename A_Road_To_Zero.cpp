#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        ll a,b;
        cin>>a>>b;
        if(x==0 && y==0)
        {
            cout<<0<<endl;
        }
        else
        {
            if(x==0 && y!=0)
            {
                cout<<y*a<<endl;
            }
            else if(y==0 && x!=0)
            {
                cout<<x*a<<endl;
            }
            else
            {
                ll c=0;
                ll mi=min(x,y);
                ll ma=(x+y)-mi;
                c+=mi*b;
                ma-=mi;
                c+=ma*a;
                cout<<c<<endl;
            }
        }
    }
}