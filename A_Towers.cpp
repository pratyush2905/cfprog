#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int m=1;
    int c=1;
    int s=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
        {
            int j=i+1;
            s++;
            while(v[i]==v[j] && j<n)
            {
                c++;
                j++;
            }
        }
        m=max(m,c);
        c=1;
    }
    cout<<m<<" "<<(n-s)<<endl;
}
signed main()
{
    solve();
}