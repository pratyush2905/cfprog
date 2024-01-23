#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        ll d=0;
        int inc=0;
        if(n>1)
        {
            
            for(ll i=0;i<n;i++)
            {
                if(v[i]!=1)
                d=d+v[i]-1;
                else
                inc++;
            }
            if(d>=inc)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}