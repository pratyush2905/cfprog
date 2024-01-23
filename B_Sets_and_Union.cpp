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
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            for(int j=0;j<k;j++)
            {
                int x;
                cin>>x;
                v[i][j].push_back(x);
            }
        }
        set<int>st;
        
    }
}