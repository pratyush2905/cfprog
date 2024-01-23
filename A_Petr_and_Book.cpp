#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(7);
    for(int i=0;i<7;i++)
    {
        cin>>v[i];
    }
    int sum=0;
    int c=0;
    while(sum<n)
    {
        int i=0;
        for(i=0;i<7;i++)
        {
            if(sum>=n)
            break;
            sum+=v[i];
        }
        c=i;
    }
    cout<<c;

}
signed main()
{
    /*int n;
    cin >> n;
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    solve(n, 0, v);*/
    solve();
}