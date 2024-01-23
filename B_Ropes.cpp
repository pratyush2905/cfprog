#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int>v;
bool good(double x)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=floor(v[i]/x);
    }
    return s>=k;
}
int main()
{
    cin>>n>>k;
    v.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    double l=0;
    double r=1e8;
    for(int t=0;t<100;t++)
    {
        double m=(l+r)/2;
        if(good(m))
        l=m;
        else
        r=m;
    }
    cout<<setprecision(20)<<l<<endl;
}