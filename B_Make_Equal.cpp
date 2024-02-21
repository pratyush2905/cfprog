#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int x = sum/n;
    int b = 0;
    int excess = 0;
    int f= -1;
    for (int i = 0; i < n; i++)
    {
        if(v[i]>=x)
        {
            excess+=abs(v[i] - x);
        }
        else
        {
            int req = abs(v[i] - x);
            if(req > excess)
            {
                f++;
                break;
            } 
            else
            {
                v[i]+=req;
                excess-= req;
            }
        }
    }
    if(f>=0 || excess!=0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
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