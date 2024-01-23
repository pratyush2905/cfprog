#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n!=5)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            string temp="Timur";
            int c=0;
            for(int i=0;i<temp.length();i++)
            {
                if(s.find(temp[i])!=string::npos)
                c++;
            }
            if(c==5)
            {
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
    }
}