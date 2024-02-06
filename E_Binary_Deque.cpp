#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
// जय श्रीराम //
using namespace std;
void solve()
{
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (k > sum)
    {
        cout<<-1<<endl;
    }
    else
    {
        int ans=0,i=0,j=0;
        sum=0;
        while(sum<k)
        {
            sum+=v[j];
            j++;
        }
        while(j<n && v[j] == 0)
        {
            j++;
        }
        ans=j;
        while(j<n)
        {
            if(v[j] == 0)
            {
                ans=max(ans,j-i+1);
                j++;
            }
            else
            {
                while(v[i]!=1)
                {
                    i++;
                }
                i++;
                ans=max(ans,j-i+1);
                j++;
            }
        }
        cout<<n-ans<<endl;
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