#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int c=0;
    for(int i=1;i<n;i++)
    {
        if(v[i-1]>v[i])
        {
            c+=abs(v[i]-v[i-1]);
            v[i]+=abs(v[i]-v[i-1]);
        }
    }
    /*for(auto it :v)
    {
        cout<<it<<" ";
    }*/
    cout<<c<<endl;
}
signed main()
{
    solve();
    
}