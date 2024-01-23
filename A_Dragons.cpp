#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    multimap<int,int>mp;
    int f=-1;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        mp.insert({x,y});
    }
    for(auto it:mp)
    {
        if(s>it.first)
        {
            s=s+it.second;
        }
        else
        {
            f++;
            break;
        }
    }
    if(f<0)
    cout<<"YES";
    else
    cout<<"NO";
}