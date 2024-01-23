#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    string t;
    cin >> s >> t;
    if (n == 1)
    {
        cout << "Yes" << endl;
        return;
    }
    else
    {
        int c = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                c++;
            }
        }
        if (c < 0)
        {
            cout << "Yes" << endl;
            return;
        }
        else
        {
            int x = -1;
            for (int i = 0; i < m - 1; i++)
            {
                if (t[i] == t[i + 1])
                    x++;
            }
            if (x < 0)
            {
                int f=-1;
                for (int i = 0; i < n - 1; i++)
                {
                    if (s[i] == s[i + 1])
                    {
                        if (s[i] == t[0] || s[i + 1] == t[m - 1])
                        {
                            f++;
                        }
                    }
                }
                if(f<0)
                cout<<"Yes"<<endl;
                else 
                cout<<"No"<<endl;
            }
            else
            cout<<"No"<<endl;
        }
    }
}
        int main()
        {
            int t;
            cin >> t;
            while (t--)
            {
                solve();
            }
        }