#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        if(k==1)
        {
            cout<<1<<endl;
        }
        else if(m==0)
        {
            cout<<0<<endl;
        }
        else if(k==2)
        {
            int s=0;
            if(m>=n)
            {
                s+=n-1;
                s+=(m/n);
            }
            else
            {
                s+=m;
            }
            cout<<s<<endl;

        }
        else if(k==3)
        {
            int s=0;
            if(m>=n)
            {
                s+=(m-n+1);
                s-=(m/n);
            }
            cout<<s<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}