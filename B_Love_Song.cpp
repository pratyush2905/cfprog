#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        v[i]=s[i]-96;
    }
    for(int i=1;i<n;i++)
    {
        v[i]+=v[i-1];
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        a--;b--;
        if(a==0)
        {
            cout<<v[b]-0<<endl;
        }
        else
        {
            cout<<v[b]-v[a-1]<<endl;
        }
        //cout << ans << endl;
    }
}