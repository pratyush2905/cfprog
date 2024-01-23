#include <bits/stdc++.h>
// #define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if ((n - k) == 1)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        int f = -1;
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        /*for (auto it = mp.begin(); it != mp.end(); it++)
        {
            while (n != 0)
            {
                if (it->second == 1)
                {
                    n--;
                    mp.erase(it);
                }
            }
            //cout << it.first << " " << it.second << endl;
        }*/
        for (auto it : mp)
        {
            int x = it.second;
            if (x % 2 != 0)
            {
                f++;
            }
            //cout<<it.first<<"-->"<<it.second<<endl;
        }
        if (f>k)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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