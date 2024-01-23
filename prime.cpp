#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    cout<<"Enter a number--"<<endl;
    int x;
    cin>>x;
    if(isPrime(x)==true)
    cout<<"Number is Prime"<<endl;
    else
    cout<<"Number is not Prime"<<endl;
}