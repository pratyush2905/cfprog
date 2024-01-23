#include<bits/stdc++.h>
using namespace std;
int upper(char ch)
{
    if(ch>=65 && ch<=90)
    return 1;
    else if(ch>=97 && ch<=122)
    return 0;
}
int main()
{
    string s;
    cin>>s;
    int f=-1;
    if(s[0]>=65 && s[0]<=90)
    f++;
    if(f<0)
    {
        int l=0;
        int u=0;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            u++;
            else if(s[i]>=97 && s[i]<=122)
            l++;
        }
        if(u==s.length()-1)
        {
            for(int i=0;i<s.length();i++)
            {
                if(upper(s[i])==1)
                s[i]=tolower(s[i]);
                else if(upper(s[i])==0)
                s[i]=toupper(s[i]);
            }
            cout<<s;
        }
        else if(l==s.length()-1)
        {
            cout<<s;
        }
        else
        cout<<s;
    }
    else
    {
        int u=0;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            u++;
        }
        if(u==s.length()-1)
        {
            for(int i=0;i<s.length();i++)
            {
                if(upper(s[i])==1)
                s[i]=tolower(s[i]);
                else if(upper(s[i])==0)
                s[i]=toupper(s[i]);
            }
            cout<<s;
        }
        else
        cout<<s;
    }
}
