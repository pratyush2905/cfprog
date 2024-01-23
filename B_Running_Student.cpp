#include<bits/stdc++.h>
using namespace std;
double solve(double x1,double &xb,double &yb,double &vs)
{
    double res;
    double a=pow((x1-xb),2);
    double b=pow(yb,2);
    res=(pow((a+b),0.5))/vs;
    return res;
}
int main()
{
    double n,vb,vs;
    cin>>n>>vb>>vs;
    vector<double>v;
    for(double i=0;i<n;i++)
    {
        double x;
        cin>>x;
        v.push_back(x);
    }
    double xb,yb;
    cin>>xb>>yb;
    double min=1e10;
    double f=0;
    for(int i=0;i<n;i++)
    {
        if(solve(v[i],xb,yb,vs)<min)
        {
            min=solve(v[i],xb,yb,vs);
            f=(i+1);
        }
    }
    if(f==1)
    {
        cout<<"2";
    }
    else
    {
        cout<<f;
    }
}