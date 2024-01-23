#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=n;
    int f=0;
    set<int>st;
    int a[]={4,7,44,47,74,77,447,474,477,744,747,774};
    while(x>0)
    {
        int dig=x%10;
        st.insert(dig);
        x=x/10;
    }
    for(auto it:st)
    {
        if(it!=4 &&  it!=7)
        {
            f++;
        }
    }
    if(f==0)
    {
        cout<<"YES";
    }

    else
    {
        int i=0;
        int ch=0;
        for(int i=0;i<10;i++){
            if(n%a[i]==0)
            ch++;
        }
        if(ch>0)
        cout<<"YES";
        else
        cout<<"NO";
        }


}