#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int a,b,c;
    c=sqrt((a3*a2)/a1);
    a=a3/c;
    b=a2/c;
    cout<<4*(a+b+c)<<endl;
}
signed main()
{
    solve();
}