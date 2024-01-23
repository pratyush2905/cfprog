    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        int k=0;
        int f=0;
        string name="vika";
        int r=0;
        int c=0;
        for(int c=0;c<m;c++)
        {
            for(r=0;r<n;r++)
            {
                if(arr[r][c]==name[k])
                {
                    k++;
                    break;
                }
            }
        }
        if(k==4)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    }