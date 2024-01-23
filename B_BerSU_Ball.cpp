#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>vb(n);
    for(int i=0;i<n;i++)
    {
        cin>>vb[i];
    }
    int m;
    cin>>m;
    vector<int>vg(m);
    for(int i=0;i<m;i++)
    {
        cin>>vg[i];
    }
    int res=0;
    sort(vb.begin(),vb.end());
    sort(vg.begin(),vg.end());
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(vb[i]-vg[j])<=1)
            {
                vg[j]=200;
                vb[i]=300;
                res++;
                break;
            }

        }
    }
    cout<<res<<endl;
}
signed main()
{
    solve();
}