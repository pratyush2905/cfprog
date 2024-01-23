#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        int ah=(i-1);
        int be=(n-i);
        if(ah>=a && be<=b)
        c++;
    }
    cout<<c;
}