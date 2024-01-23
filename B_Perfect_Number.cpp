#include<bits/stdc++.h>
#define int long long
using namespace std;
bool perfect(int x)
{
    int s=0;
    while(x!=0)
    {
        s+=x%10;
        x/=10;
    }
    if(s==10)
    return true;
    else
    return false;
}
void solve()
{
    int x;
    cin>>x;
    int c=0;
    int i=1;
    int ans;
    while(c!=x && i<1e10)
    {
        if(perfect(i)==true)
        {
            c++;
            ans=i;
        }
        i++;
    }
    cout<<ans;
}
signed main()
{
    solve();
}