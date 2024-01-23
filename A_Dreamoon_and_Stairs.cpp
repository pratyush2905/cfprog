#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m || n==0 || m<1)
    cout<<-1;
    else
    {
        int x=n%2;
        int y=n/2;
        int a=y+x;
        while(a%m!=0 && y!=0)
        {
            if(a%m==0)
            cout<<a;
            else
            {
                a+=1;
                y--;
            }
        }
        cout<<a;
    }
}