#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int s=0;
        for(int i=1;i<=n-1;i++)
        {
            int x;
            cin>>x;
            s+=x;
        }
        cout<<(-s)<<endl;
    } 
}