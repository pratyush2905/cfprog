#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int t=0;
        if(n<=6)
        cout<<15<<endl;
        else{
        if(n%2!=0)
        n++;
        cout<<(n/2*5)<<endl;
        }
    }
}