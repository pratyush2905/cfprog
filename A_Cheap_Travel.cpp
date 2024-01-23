#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int cost=0;
    if(n==1)
    {
        cout<<min(a,b)<<endl;
    }
    else
    {
        int st=n/m;
        int rem=n%m;
        int t=b/m;
        int cost=0;
        if(a>t)
        {
            cost=st*b;
            if(rem!=0 && (a*rem)>=b)
            {
                cost=cost+b;
            }
            else if(rem!=0 && (a*rem)<=b)
            {
                cost=cost+(rem*a);
            }
            cout<<cost<<endl;
        }
        else if(a<=t)
        {
            cout<<(n*a)<<endl;
        }
    
    }
}
