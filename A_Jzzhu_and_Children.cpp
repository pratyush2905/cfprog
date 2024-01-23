#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]<=m)
        v[i]=0;
    }
    double max=0;
    int ind=0;
    for(int i=0;i<n;i++)
    {
        if(ceil(v[i]/m)>=max)
        {
            max=ceil(v[i]/m);
            ind=i;
        }
    }
    cout<<(ind+1);
}