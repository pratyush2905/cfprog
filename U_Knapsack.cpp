#include<bits/stdc++.h>
#define int long long
using namespace std;
int knap(vector<int>wi, vector<int>vi,int w,int n)
{
    if(n==0)
    {
        if(w>=wi[0])
        {
            return vi[0];
        }
        else
        {
            return 0;
        }
    }

    if(wi[n]<=w)
    {
        return max(vi[n]+knap(wi,vi,w-wi[n],(n-1)),knap(wi,vi,w,(n-1)));
    }

    else if(wi[n]>w)
    {
        return knap(wi,vi,w,(n-1));
    } 

}
void solve()
{
    int n,w;
    cin>>n>>w;
    vector<int>wi(n);
    vector<int>vi(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        wi[i]=a;
        vi[i]=b;
    }
    cout<<knap(wi,vi,w,n-1);

}
signed main()
{
    solve();
}