#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int c=1;
    int ans=0;
    sort(v.begin(),v.end());
    for(auto it:v)
    {
        if(it<0 && c<=m)
        {
            ans=ans+it;
            c++;
        }
    }
    cout<<(-ans);
}