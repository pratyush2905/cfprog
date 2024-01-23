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
    int x=0;
    int f=-1;
    for(int num=0;num<(1<<n);num++)
    {
        int sum=0;
        for(int bits=0;bits<n;bits++)
        {
            if(num&(1<<bits))
            sum+=v[bits];
            else
            sum-=v[bits];
        }
        if(sum%360==0)
        {
            f++;
            break;
        }
    }
    if(f>=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
signed main()
{

    solve();
}