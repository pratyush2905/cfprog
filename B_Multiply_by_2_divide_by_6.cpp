#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll cp=n;
        int c=0;
        while(n!=0)
        {
            c++;
            n/=6;
        }
        if(n==1)
        {
            cout<<c<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }
}
