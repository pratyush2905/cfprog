#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    int am=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            am++;
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            am++;
            min=arr[i];
        }
    }
    cout<<am;   
}