#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>v;
int main()
{
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int k;
    cin>>k;
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        auto a1=upper_bound(v.begin(),v.end(),r);
        auto a2=lower_bound(v.begin(),v.end(),l);
        cout<<a1-a2<<" ";
    }
}