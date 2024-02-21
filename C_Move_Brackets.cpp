#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int t=0;
        int b=0;
        for(int i=0;i<n;i++)
        {
            char x;
            cin>>x;
            if(x=='(')
            b++;
            else
            b--;
            if(b<0)
            {
                t++;
                b=0;
            }
        }
        cout<<t<<endl;
    } 
}