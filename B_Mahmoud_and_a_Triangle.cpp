#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int f=-1;
    for(int i=0;i<n-2;i++)
    {
        if(v[i]+v[i+1]>v[i+2] && v[i]+v[i+2]>v[i+1] && v[i+1]+v[i+2]>v[i])
        {
            f++;
            break;
        }
    }
    if(f>=0)
    cout<<"YES";
    else
    cout<<"NO";
}