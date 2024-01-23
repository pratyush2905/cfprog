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
        if(n<7)
        cout<<"NO"<<endl;
        else if(n==9)
        cout<<"NO"<<endl;
        else if(n%3)
            {
                cout<<"YES"<<endl;
                cout<<1<<" "<<2<<" "<<n-3<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<1<<" "<<4<<" "<<n-5<<endl;
            }
        }
    }
