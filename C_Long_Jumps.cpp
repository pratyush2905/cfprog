#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v[i]=x;
    }
    vector<int>a(n);
    int s=0;
    int s2=0;
    int j=0;
    for(int i=1;i<=n;i++)
    {
        s+=v[i];
        j=i;
        if(j>n)
        {
            break;
        }
        else
        {
            s+=v[j+s];
            j=j+s;
        }
    }
    /*sort(a,a+n);
    cout<<a[n]<<endl;*/
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}