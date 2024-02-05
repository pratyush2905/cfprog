#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    if(a.first==b.first)
    {
        return (a.second<b.second);
    }
    return(a.first>b.first);
}
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int c = 0;
    int cost=abs((s[0]-'a')-(s[n-1]-'a'));
    int start=(s[0]-'a');
    int last=(s[n-1]-'a');
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        int x = s[i]-'a';
        int a =min(start,last);
        int b=max(start,last);
        if((x-a)>=0 and (x-b)<=0)
        {
            c++;
            v.push_back({x,i+1});
        }
    }
    sort(v.begin(),v.end());
    if(start>last)
    {
        sort(all(v),cmp);
    }
    cout<<cost<<" "<<c<<endl;
    for(auto it : v)
    {
        cout<<it.second<<" ";
    }
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