#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    if (n == 2)
    {
        if (s[1] > s[0])
        {
            cout << s[0] << " " << s[1] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        string a="",b="";
        for(int i=0;i<n/2;i++)
        {
            a+=s[i];
            b=s.substr(i+1,n);
            if(b[0]!='0' && stoi(b)>stoi(a))
            {
                cout<<a<<" "<<b<<endl;
                return;
            }
        }
        cout<<"-1"<<endl;
    }

}
signed main()
{
    int t;
    cin >> t;
    while (t--)
        {
            solve();
        }
}