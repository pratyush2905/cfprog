#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        int l=-1;
        int r=n;
        while(r>l+1)
        {
            int m=(l+r)/2;
            if(v[m]<=x)
            {
                l=m;
            }
            else
            {
                r=m;
            }
        }
        cout<<l+1<<endl;
    }
}