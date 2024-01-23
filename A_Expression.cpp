#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int s1=a+b;
    int s2=b+c;
    int s=a+b+c;
    int m=s;
    int p1=s1*c;
    if(p1>=m)
    m=p1;
    int p2=a*s2;
    if(p2>=m)
    m=p2;
    int p=a*b*c;
    if(p>=m)
    m=p;
    cout<<m;
}