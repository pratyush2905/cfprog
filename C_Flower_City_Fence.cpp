#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<a[0];i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]-j>0)
                {
                    b[j]+=1;
                }
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i] != b[i])
            {
                c++;
                break;
            }
        }
        if(c>0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
}