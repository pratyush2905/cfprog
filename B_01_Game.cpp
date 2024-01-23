#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int a = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            a++;
    }
    int b = s.length() - a;
    if (s.length() == 1)
    {
        cout << "NET" << endl;
    }
    else
    {
        if (a == 1)
        {
            cout << "DA" << endl;
        }
        else
        {
            if (a % 2 != 0 || b % 2 != 0)
            {
                if (a % 2 != 0 && b % 2 != 0)
                    cout << "DA" << endl;
                else if (a % 2 == 0 && b % 2 != 0)
                {
                    if (a > b)
                    {
                        cout << "DA" << endl;
                    }
                    else if (a < b)
                    {
                        cout << "NET" << endl;
                    }
                }
                else if (a % 2 != 0 && b % 2 == 0)
                {
                    if (a > b)
                    {
                        cout << "NET" << endl;
                    }
                    else if (a < b)
                    {
                        cout << "DA" << endl;
                    }
                }
            }
            else
                cout << "NET" << endl;
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
