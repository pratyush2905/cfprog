#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,y,n;
        cin>>x>>y>>n;
        long long k;
        int w=(n-y)%x;
        k=n-w;
        cout<<k<<endl;
    }
    
}