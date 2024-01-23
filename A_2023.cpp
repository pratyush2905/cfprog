#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int p=1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        p*=v[i];
    }
    if(2023%p!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<(2023/p)<<" ";
        k--;
        while(k--)
        {
            cout<<1<<" ";
        }
        cout<<endl;
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