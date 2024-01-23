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
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        vector<int>v;
        v.push_back(b[0]);
        for(int i=1;i<n;i++)
        {
            if(b[i]<b[i-1])
            {
                v.push_back(1);
            }
            v.push_back(b[i]);
        }
        cout<<v.size()<<endl;
        for(auto it=v.begin();it!=v.end();it++)
        {
            cout<<(*it)<<" ";
        }
        cout<<endl;
    }
}