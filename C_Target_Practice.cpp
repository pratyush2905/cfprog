#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans=0;
        for(int i=1;i<=10;i++)
        {
            string s;
            cin>>s;
            int c=0;
            if(i=1)
            {
                for(int j=0;j<s.length();j++)
                {
                    if(s[j]=='X')
                    c++;
                }
                ans=ans+c;
            }
            else
            {
                for(int j=0;j<s.length();j++)
                {
                    
                }
            }

        }
    }
}
          
            
