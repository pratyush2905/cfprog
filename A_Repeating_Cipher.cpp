#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    string s;
    cin>>s;
    int i=1;
    int ind=0;
    while(ind<l)
    {
        cout<<s[ind];
        ind=ind+i;
        i++;
    }
}