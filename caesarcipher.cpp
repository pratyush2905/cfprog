#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number shift--";
    cin>>n;
    string s;
    cout<<"enter the string--";
    cin>>s;
    int x;
    for(int i=0;i<s.length();i++)
    {
        x=(int)s[i];
        cout<<(char)((x+n)%122);
    }


}
