#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int m1=(3*a)/10;
    int m2=a-((a*c)/250);
    int v1=(3*b)/10;
    int v2=b-((b*d)/250);
    int ma=max(m1,m2);
    int va=max(v1,v2);
    if(ma>va)
    {
        cout<<"Misha"<<endl;
    }
    else if(ma<va)
    {
        cout<<"Vasya"<<endl;
    }
    else if(ma==va)
    {
        cout<<"Tie"<<endl;
    }
}