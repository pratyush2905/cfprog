#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0;
        int c=0;
        while(i<s.length())
        {
            if(s[i]=='B')
            {
                i=i+(k-1);
                c++;
            }
            i++;
        }
        cout<<c<<endl;
    }
}