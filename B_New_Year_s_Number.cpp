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
        if(n%2020==0 || n%2021==0)
        cout<<"YES"<<endl;
        else
        {
            int y=n%2020;
            int x=(n-y)/2020;
            if(x-y>=0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}
/*#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        while(n%10 != 0){
            n-=2021;
        }
        while(n>0){
            n=n-2020;
        }
        if(n == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    
}*/