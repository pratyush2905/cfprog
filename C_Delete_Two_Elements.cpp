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
    vector<int> v(n);
    int sum = 0;
    fr(0, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    int a = (sum / n) * (n - 2);
    //cout<<a<<endl;
    //cout<<x<<endl;
    int b = sum - a;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]+v[j]==b)
            cnt++;
        }
    }
    cout<<cnt<<endl;
    //cout << b << endl;
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