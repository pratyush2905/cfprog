    #include<bits/stdc++.h>
    using namespace std;
    int prime(int n)
    {
    int f=-1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f++;
        }
    }
    if(f>=0)
    return 0;
    else
    return 1;
    }
    int main()
    {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.length()==2)
        {
            cout<<"-1"<<endl;
        }
        else
        {
        int x;
        string temp="";
        int pos1;
        int pos2;
        for(int i=0;i<s.length();i++)
        {
            x=s[i]-'0';
            if(x==1)
            pos1=i;
            else if(x==7)
            pos2=i;
        }
        if(pos1>pos2)
        {
            cout<<"71"<<endl;
        }
        else if(pos2>pos1)
        {
            cout<<"17"<<endl;
        }
     }
    }
}
