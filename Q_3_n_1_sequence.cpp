#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve(int n,int k)
{
    if (n==1)
    {
        cout<<k+1;
    }
    else
    {
        if(n%2==0)
        {
            k++;
            solve(n/2,k);
        }
        else
        {
            k++;
            solve(3*n+1,k);
        }
    }
}
signed main()
{
    int n;
    cin>>n;
    solve(n,0);
}