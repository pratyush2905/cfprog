#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if(b==0)
    return a;
    else 
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0"<<" "<<"0"<<endl;
        }
        else
        {
            if(a>b)
            swap(a,b);
            ll g=abs(a-b);
            ll y=a%g;
            cout<<g<<" "<<min(y,g-y)<<endl;
        }
    }
}
