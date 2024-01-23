#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ai[3];
    int aj[3];
    int k=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j]=='*')
            {
                ai[k]=i;
                aj[k]=j;
                k++;
            }
        }
    }
    vector<int>v;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(ai[i]==ai[j])
            {
               v.push_back(aj[i]);
            }
        }
    }
    for(auto e:v)
    cout<<e<<endl;
}