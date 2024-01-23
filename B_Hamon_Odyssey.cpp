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
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int a=v[0];
        int c=1;
        for(int i=0;i<n;i++)
        {
            a&=v[i];
            if(a==0)
            {
                if(i==n-1)
                break;
                c++;
                a=v[i+1];
            }
        }
        if(a!=0)
        c--;
        c=max(c,1);
        cout<<c<<endl;

    }
}