#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, k;
    cin >> n >> k;
    if(n%2!=k%2)
    {
        cout<<"NO"<<endl;
        return;
    }
    else 
    {
        if(k*k>n)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}