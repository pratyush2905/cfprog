#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int v[n];
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(v[i]>=v[k] && v[i]>0)
        {
            c++;
        }
    }
    cout<<c;
}