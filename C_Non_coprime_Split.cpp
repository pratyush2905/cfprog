#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return(a);
    else
        return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int l,r;
        cin>>l>>r;
        long int a,b;
        int f=-1;
        if(l<3 && r<3)
        cout<<"-1"<<endl;
        else if(r>l)
        {
            if(r%2==0)
            {
                cout<<l/2<<" "<<r/2<<endl;
            }
            else
            {
                r--;
                cout<<l/2<<" "<<r/2<<endl;
            }
        }
        else if(r==l)
        {
            
        }
    }
