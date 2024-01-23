#include<bits/stdc++.h>
using namespace std;
int p(vector<int>v)
{
    int p=1;
    for(int i=0;i<v.size();i++)
    {
         p=p*v[i];
    }
    return(p);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int n;
        cin>>n;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        int a=distance(v.begin(),max_element(v.begin(),v.end()));
        int ma;
        v[a]=v[a]+1;
        ma=p(v);
        v[a]=v[a]-1;
        int b=distance(v.begin(),min_element(v.begin(),v.end()));
        int min;
        v[b]=v[b]+1;
        min=p(v);
        cout<<max(ma,min)<<endl;

    }
}
