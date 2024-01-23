#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n=s.length();
    int sum=INT_MIN;
    int ind;
    for(int i=0;i<n-1;i++)
    {
        if((a+b)>=10)
        {
            ind=i;
            sum=max(sum,(a+b));
        }
    }
    /*s.erase(ind,ind+2);
    string t=to_string(sum);
    s.push_back(t[0]);
    s.push_back(t[1]);*/
    cout<<sum<<endl;
    //cout<<ind<<endl;
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