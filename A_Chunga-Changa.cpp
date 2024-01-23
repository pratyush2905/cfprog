#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll x,y,z;
    cin>>x>>y>>z;
    ll mx=(x+y)/z;
    ll in=(x/z)+(y/z);
    ll rem=(x%z)+(y%z);
    if(rem<z)
    {
        cout<<mx<<" "<<"0";
    }
    else
    {
        cout<<mx<<" "<<min(z-(x%z),z-(y%z));
    }
}