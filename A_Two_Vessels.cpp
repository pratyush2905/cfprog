#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b;
    int c;
    cin>>a>>b>>c;
    int d=abs(a-b);
    if(a==b){
        cout<<0<<endl;
    }
    else if(c>=d){
        cout<<1<<endl;
    }
    else if(d%(2*c)==0){
        cout<<d/(2*c)<<endl;
    }
    else {
        cout<<(d/(2*c))+1<<endl;
        }
    }
}
