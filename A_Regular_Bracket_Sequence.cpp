#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin>>s;


    int n=s.length();
    if(n&1!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    else if(s[0]==')')
    {
        cout<<"NO"<<endl;
    }
    else if(s[n-1]=='(')
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int q=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='?')
            q++;
        }
        if(q%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}