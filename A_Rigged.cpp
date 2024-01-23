#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll e[n];
        ll s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            cin>>e[i];
        }
        ll sp=s[0];
        ll ep=e[0];
        ll w=sp;
        int f=-1;
        for(int i=1;i<n;i++)
        {
            if(s[i]>=sp && e[i]>=ep)
            {
            cout<<"-1"<<endl;
            f++;
            break;
            }
        }
        if(f<0)
        cout<<w<<endl;
    }
}