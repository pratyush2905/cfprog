#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    string t=s1+s2;
    sort(t.begin(),t.end());
    sort(s3.begin(),s3.end());
    if(s3==t)
    cout<<"YES";
    else
    cout<<"NO";
} 