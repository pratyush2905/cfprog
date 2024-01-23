#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    cin>>n>>x;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(x/i<=n && x%i==0)
        c++;
    }
    cout<<c;
}