#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][2];
    int left=0;
    int right=0;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
            if(j==0){
                left+=arr[i][j];
            }
            else{
                right+=arr[i][j];
            }
        }
    }
    if(left>n/2){
        c+=n-left;
    }
    else{
        c+=left;
    }
    if(right>n/2){
        c+=n-right;
    }
    else{
        c+=right;
    }
    cout<<c;
    return 0;
}