#include <bits/stdc++.h>
#define int long long
using namespace std;
int find(int a,int b,int c)
{
    int x=abs(a-b)+abs(a-c)+abs(b-c);
    return x;
}
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans=find(a,b,c);
    for(int i=-1;i<=1;i++)
    {
        for(int j=-1;j<=1;j++)
        {
            for(int k=-1;k<=1;k++)
            {
                int na=a+i;
                int nb=b+j;
                int nc=c+k;
                ans=min(ans,find(na,nb,nc));
            }
        }
    }
    cout<<ans<<endl;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}