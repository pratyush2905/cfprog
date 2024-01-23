#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    if(n==1)
    cout<<"0"<<endl;
    else
    {
        if(n%2!=0)
        cout<<"0"<<endl;
        else
        {
            cout<<(int)pow(2,(n/2))<<endl;
        }
    }
}
int main()
{
    solve();
}