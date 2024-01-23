#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int a,s;
    cin>>a>>s;
    vector<int>b;
    while(s)
    {
        int x=a%10;
        int y=s%10;

        if(x<=y)
        {
            b.push_back(y-x);
        }
        else
        {
            s/=10;
            y+=10*(s%10);
            if(y>=10 && y<=19)
            {
                b.push_back(y-x);
            }
            else
            {
                cout<<"-1"<<endl;
                return;
            }
        }
        a/=10;
        s/=10;
    }
    if(a)
    cout<<-1<<endl;
    else
    {
        while(b.back()==0)
        b.pop_back();
        for(int i=b.size()-1;i>=0;i--)
        cout<<b[i];
        cout<<endl;
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