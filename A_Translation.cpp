#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    if(s.length()!=t.length())
    {
        cout<<"NO";
    }
    else
    {
        int c=0;
        int x=s.length();
        if(x%2==0)
        {
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]==t[x-(i+1)])
            c++;
        }
        if(c==x)
        cout<<"YES";
        else
        cout<<"NO";
        }
        else
        {
            for(int i=0;i<s.length();i++)
            {
                if(i!=(x/2))
                {
                     if(s[i]==t[x-(i+1)])
                     c++; 
                }
                else
                {
                    if(s[i]==t[i])
                    c++;
                }
            }
            if(c==x)
            cout<<"YES";
            else
            cout<<"NO";
        }
    }
}