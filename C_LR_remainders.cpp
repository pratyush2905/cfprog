#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    deque<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    string s;
    cin >> s;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'L')
        {
            v.push_back(a.front());
            a.pop_front();
        }
        else
        {
            v.push_back(a.back());
            a.pop_back();
        }
    }
    reverse(all(v));
    vector<int>ans;
    int mul=1;
    for(auto it : v)
    {
        mul*=it;
        mul%=m;
        ans.push_back(mul);
    }
    reverse(all(ans));

    for(auto it : ans)
    cout<<it<<" ";
    cout<<endl;
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