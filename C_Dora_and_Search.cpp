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
    int n;
    cin >> n;
    int mx = n;
    int mn = 1;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l=0;
    int r=n-1;
    int f=-1;
    while(l<r)
    {
        int pos1 = l;
        int pos2 = r;
        if(v[l] == mn)
        {
            mn++;
            l++;
        }
        else if (v[l] == mx)
        {
            mx--;
            l++;
        }
        if(v[r] == mn)
        {
            mn++;
            r--;
        }
        else if (v[r] == mx)
        {
            mx--;
            r--;
        }
        if(pos1 == l and pos2 == r)
        {
            cout<<pos1+1<<" "<<pos2+1<<endl;
            f++;
            break; 
        }
    }
    if(f<0)
    cout<<-1<<endl;
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