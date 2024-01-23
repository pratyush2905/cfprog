#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int c=0,cp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
                c++;
                if(a[i][j+1]=='.' && (j+1)!=m)
                {
                    c++;
                    cp++;
                    j++;
                }
            }
        }
    }
    if(c==0 || cp==0)
    {
        cout<<max(x*c,y*cp)<<endl;
    }
    else
    {
        int a1=x*c;
        if(cp*2==c)
        {
            cout<<min(x*c,y*cp)<<endl;
        }
        else
        {
            cout<<min(x*c,(cp*y+(c-2*cp)*x))<<endl;
        }
    }
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