#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int in=a[n-1]-a[0];
    for(int i=1;i<m;i++)
    {
        int min;
        if((i+(n-1))<=(m-1))
        {
            min=a[i+(n-1)]-a[i];
        }
        if(min<in)
        {
            in=min;
        }
    }
    cout<<in;
}