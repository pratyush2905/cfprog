#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a;
    cin>>a;
    int x=180-a;
    if(360%x==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}