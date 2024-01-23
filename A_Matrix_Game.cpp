#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    int m[a][b];
    int res = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> m[i][j];
        }
    }
    int ri = 0;
    int ci = 0;
    for (int i = 0; i < a; i++)
    {
        int f = -1;
        for (int j = 0; j < b; j++)
        {
            if (m[i][j] == 1)
            {
                f++;
            }
        }
        if (f < 0)
            ri++;
    }
    for (int i = 0; i < b; i++)
    {
        int f = -1;
        for (int j = 0; j < a; j++)
        {
            if (m[j][i] == 1)
            {
                f++;
            }
        }
        if (f < 0)
        ci++;
    }
    if(min(ri,ci)%2==0)
    cout<<"Vivek"<<endl;
    else
    cout<<"Ashish"<<endl;
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