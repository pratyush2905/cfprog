#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t;
    cin>>n>>t;
    long long c=n;
    long long num=1;
    if(n==1 && t>9)
    cout<<"-1";
    else if(t==10)
    {
        while(c!=1){
        cout<<1;
        c--;
        }
        cout<<0;
    }
    else 
    {
        while(c--)
        {
            cout<<t;
        }
    }
}