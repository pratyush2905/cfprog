#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=s.length();
    int c1=0,c0=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }
    cout<<abs(c1-c0);
}