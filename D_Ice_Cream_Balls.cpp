#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long x=round(sqrt(1+8*n));
        cout<<((1+x)/2)<<endl;
    }
}