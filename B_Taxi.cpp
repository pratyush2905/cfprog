#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int o=0,tw=0,th=0,fo=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        o++;
        else if(x==2)
        tw++;
        else if(x==3)
        th++;
        else if(x==4)
        fo++;
    }
    int tx=0;
    tx+=fo;
}
signed main()
{
    solve();
}