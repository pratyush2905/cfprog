#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="abc")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(s[0]!='a')
            {
                char x=s[0];
                if(s[1]=='a')
                {
                    s[1]=x;
                    s[0]='a';
                }
                else if(s[2]=='a')
                {
                    s[2]=x;
                    s[0]='a';
                }
                if(s!="abc")
                cout<<"NO"<<endl;
                else
                cout<<"YES"<<endl;
            }
            else if(s[1]!='b')
            {
                char x=s[1];
                if(s[0]=='b')
                {
                    s[0]=x;
                    s[1]='b';
                }
                else if(s[2]=='b')
                {
                    s[2]=x;
                    s[1]='b';
                }
                if(s!="abc")
                cout<<"NO"<<endl;
                else
                cout<<"YES"<<endl;
            }
            else if(s[2]!='c')
            {
                char x=s[2];
                if(s[0]=='c')
                {
                    s[0]=x;
                    s[2]='c';
                }
                else if(s[1]=='c')
                {
                    s[1]=x;
                    s[2]='c';
                }
                if(s!="abc")
                cout<<"NO"<<endl;
                else
                cout<<"YES"<<endl;
            }
        }

    }
}