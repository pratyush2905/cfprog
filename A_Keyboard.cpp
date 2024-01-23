#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    string s1;
    cin>>s1;
    string s2="qwertyuiopasdfghjkl;zxcvbnm,./";
    string temp="";
    if(x=='R')
    {
        for(int i=0;i<s1.length();i++)
        {
            for(int j=0;j<s2.length();j++)
            {
                if(s1[i]==s2[j])
                {
                    temp+=s2[j-1];
                }
            }
        }
    }
    else if(x=='L')
    {
        for(int i=0;i<s1.length();i++)
        {
            for(int j=0;j<s2.length();j++)
            {
                if(s1[i]==s2[j])
                {
                    temp+=s2[j+1];
                }
            }
        }
    }
    cout<<temp;
}