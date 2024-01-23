#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n<=3 && n!=1)
    {
        cout<<"NO SOLUTION";
    }
    else if (n==1)
    {
        cout<<1;
    }
    else
    {
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
    }
}
signed main()
{

    solve();
    
}