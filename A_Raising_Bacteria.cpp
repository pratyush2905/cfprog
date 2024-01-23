#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int x;
    cin>>x;
    int b=0;
    while(x!=0)
    {
        if(x%2==1)
        b++;
        x/=2;
    }
    cout<<b;
}