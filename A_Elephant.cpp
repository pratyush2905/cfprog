#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x<=5)
    cout<<1;
    else
    {
        int f=0;
        while(x>0)
        {
            if(x>=5)
            {
                x=x-5;
                f++;
            }
            else if(x>=4)
            {
                x=x-4;
                f++;
            }
            else if(x>=3)
            {
                x=x-3;
                f++;
            }
            else if(x>=2)
            {
                x=x-2;
                f++;
            }
            else if(x>=1)
            {
                x=x-1;
                f++;
            }
        }
        cout<<f;
    }
}