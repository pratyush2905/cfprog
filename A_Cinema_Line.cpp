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
    if(v[0]==50 || v[0]==100)
    {
        cout<<"NO"<<endl;
        return;
    }
    else 
    {
        int a=0;
        int b=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==25)
            {
                ++a;
            }
            else if(v[i]==50)
            {
                ++b;
                if(a>=1)
                {
                    --a;
                }
                else
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
            else if(v[i]==100)
            {
                if(a>=1 && b>=1)
                {
                    --a;
                    --b;
                }
                else if(a>=3)
                {
                    a-=3;
                }
                else
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
        cout<<"YES"<<endl;
        return;
    }
}
signed main()
{
    solve();
}