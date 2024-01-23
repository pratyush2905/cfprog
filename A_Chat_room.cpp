#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t="hello";
    int k=0;
    int c=0;
       for(int i=0;i<s.length();i++)
       {
        if(s[i]==t[k])
        {
            k++;
            c++;
        }
       }
       if(c==5)
       cout<<"YES";
       else
       cout<<"NO";
}