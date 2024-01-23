#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n==m)
    {
        if(n%2==0)
        {
            cout<<"Malvika";
        }
        else
        cout<<"Akshat";
    }
    else if(n==1 || m==1)
    {
         cout<<"Akshat";
    }
    else if(n>m || m>n)
    {
        int k=0;
        while(n!=0 && m!=0)
        {
            n=n-1;
            m=m-1;
            k++;
        }
        if(k%2==0)
        cout<<"Malvika";
        else
        cout<<"Akshat";
    }

}