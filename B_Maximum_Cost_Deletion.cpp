#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        if(b>=0)
        {
            cout<<(n*a)+(n*b)<<endl;
        }
        else
        {
            int p=0;
            for(int i=1;i<n;i++)
            {
                if(s[i]!=s[i-1])
                p++;
            }
            p++;
            cout<<(n*a)+((p/2)+1)*b<<endl;
        }
    }   
}