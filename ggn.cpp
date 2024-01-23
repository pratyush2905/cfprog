#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if(b==0)
    return a;
    else 
    return gcd(b,a%b);
}
int main()
{
    int x=gcd(10,7);
    cout<<x;
}