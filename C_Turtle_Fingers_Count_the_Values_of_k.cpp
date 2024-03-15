#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int a,b,l;
    cin >> a >> b >> l;
    if(l % a!= 0 && l%b!=0)
    {
        cout << 1 << endl;
    }
    else
    {
        //cout<< "w" << endl;
        int ca=0,cb=0;
        while(l!=0)
        {
            if(l%a == 0)
            {
                ca++;
                l/=a;
            }
            else if (l%b == 0)
            {
                cb++;
                l/=b;
            }
        }
        if(l == 0)
        {
            cout << (ca+cb+2) << endl;
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