#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        string s="2";
        n--;
        while(n>0)
        {
            s+='3';
            n--;
        }
        cout<<s<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}