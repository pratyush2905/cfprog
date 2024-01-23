#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=0;k<j;k++)
            {
                if(v[k]==1)
                f++;
                else
                z++;
            }
        }

    }
}
signed main()
{
    solve();
}