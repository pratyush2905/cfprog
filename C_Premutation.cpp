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
    int arr[n][n - 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i][0]]++;
    }
    int f;
    for (auto it : mp)
    {
        if (it.second != 1)
        {
            f=it.first;
            cout << it.first << " ";
        }
    }
    //cout<<f<<" ";
    int ind;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        int flag=-1;
        for (int j = 0; j < n - 1; j++)
        {
            if(arr[i][j]==f)
            {
                flag++;
            }
        }
        if(flag<0)
        ind=i;
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[ind][i]<<" ";
    }
    //cout << ind << endl;
    cout << endl;
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