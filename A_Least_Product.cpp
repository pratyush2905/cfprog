#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    int  neg = 0;
    int f=-1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v[i]=x;
        if(x==0)
        {
            f++;
        }
        if (x < 0)
        neg++;
    }
    if(f>=0)
    {
        cout<<0<<endl;
    }
    
    if (neg % 2 == 0 )
    {
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
    }
    else
    {
        if (n == 1)
        {
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
        else
        {
            cout << 0 << endl;
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