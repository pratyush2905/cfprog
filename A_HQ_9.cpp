    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    string c="HQ9+";
    string t;
    cin>>t;
    int ch=0;
    for(int i=0;i<t.length();i++)
    {
            if(t[i]=='H' || t[i]=='Q'|| t[i]=='9')
            ch++;
    }
    
    if(ch>0)
    cout<<"YES";
    else
    cout<<"NO";
    }