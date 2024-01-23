#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=1;i<=n;i++)
{
cin>>a[i];
}
int m;
cin>>m;
int b[m];
for(int i=1;i<=m;i++)
{
cin>>b[i];
}
int f=0;
int r=0;
int s=0;
for(int i=1;i<=m;i++)
{
for(int j=1;j<=n;j++)
{
    f++;
    if(b[i]==a[j])
    {
        break;
    }
            r=r+(n+1-f);
}
} 
cout<<f<<" "<<r;
}