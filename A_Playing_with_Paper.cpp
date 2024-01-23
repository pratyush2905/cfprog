#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    long long ans=0;
    if(a==1 || b==1)
    cout<<max(a,b);
    else
    {
        while(a>=1 && b>=1)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
        ans=ans+1;
    }
    cout<<ans;
}
}