#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x < 10)
            cout << x << endl;
        else if (x > 45)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> v;
            int i = 9;
            int s = 0;
            while (s != x && i>0 )
            {
                int a = s + i;
                if (a <= x)
                {
                    s =s + i;
                    v.push_back(i);
                    i--;
                }
                else
                    i--;
            }
            for (auto it = v.rbegin(); it != v.rend(); it++)
            {
                cout << *it;
            }
            cout << endl;
        }
    }
}