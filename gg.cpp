#include <bits/stdc++.h>
// #define int long long
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if ((n - k) == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        int f = -1;
        map<char, int> mp;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            while (n != 0)
            {
                if (it->second == 1)
                {
                    n--;
                    mp.erase(it);
                }
            }
        }
        for (auto it : mp)
        {
            int x = it.second;
            if (x % 2 != 0)
            {
                f++;
                break;
            }
        }
        if (f < 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}