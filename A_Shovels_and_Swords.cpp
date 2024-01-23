#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a,b;
    cin>>a>>b;
    int x=min(a,b);
    cout<<min(x,(a+b)/3)<<endl;
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