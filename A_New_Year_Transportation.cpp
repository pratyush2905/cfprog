#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>v;
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=1;i<n;i++)
    {
        int s=(i+1)+v[i];
        if(s==t){
        cout<<"YES";
        return 0;
        }    
    }
    cout<<"NO";
}
