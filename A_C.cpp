#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        long long count=0;
        while(max(a,b)<=n)
        {
            
            if(a>b)
            {
                b+=a;
            }
            else 
            {
                a+=b;
            }
            count++;
        }
        cout<<count<<endl;
    }
}