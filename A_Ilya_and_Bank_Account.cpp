#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1,a2;
    a2=n;
    a1=(n/10);
    string s=to_string(a2);
    int x=s.length();
    s.erase(s.end()-2);
    a2=stoi(s);
    if(n>a1 && n>a2)
    cout<<n;
    else
    cout<<max(a1,a2);
}