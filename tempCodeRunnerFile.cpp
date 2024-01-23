#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, char> mp;
    if (n == 1)
    {
        if (s[0] == 'R')
            cout << "P" << endl;
        else if (s[0] == 'P')
            cout << "S" << endl;
        else if (s[0] == 'S')
            cout << "R" << endl;
    }
    else if (n == 2)
    {
        if (s[0] == 'R')
            cout << "P";
        else if (s[0] == 'P')
            cout << "S";
        else if (s[0] == 'S')
            cout << "R";
        if (s[1] == 'R')
            cout << "P";
        else if (s[1] == 'P')
            cout << "S";
        else if (s[1] == 'S')
            cout << "R";
        cout<<endl;
    }
    else
    {
        int nc = n;
        int a = floor(n / 2);
        int i=-1;
        while (n > a)
        {
            cout << "P";
            n--;
            i++;
        }
        //cout<<i<<endl;
        i++;
        while(i<nc)
        {
            if (s[i] == 'R')
                cout << "P";
            else if (s[i] == 'P')
                cout << "S";
            else if (s[i] == 'S')
                cout << "R";
            i++;
        }
        cout<<endl;
        //cout<<a;*/
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