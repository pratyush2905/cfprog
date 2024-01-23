#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ans=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0)
        {
            if(arr[i]>=arr[i-1])
            c++;
            else
            c=0;
        }
        ans=max(ans,c);   
    }
    cout<<(ans+1);
}