#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    vector<int>v(3);
    int hp=0;
    for(int i=0;i<3;i++)
    {
        cin>>v[i];
        hp+=v[i];
    }
    int sh=0;
    for(int i=0;i<3;i++)
    {
        if(v[i]!=1)
        {
            sh+=v[i]-1;
        }
    }
    sh+=1;
    if(hp%9==0 && min({v[0],v[1],v[2]})>=(hp/9))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
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