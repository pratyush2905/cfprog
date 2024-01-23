#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        for (int i = 0; i < x; i++)
        {
            cin >> s[i];
        }
        int c = 0;
        int f = 0;
        for (int i = 0; i < x; i++)
        {
            int x = (int)s[i];
            if (x == 97 || x == 101 || x == 105 || x == 111 || x == 117)
            {
                c = 0;
            }
            else
            {
                c++;
                if (c >= 4)
                {
                    cout << "YES" << endl;
                    f = 1;
                    break;
                }
            }
        }
        if (f == 0)
            cout << "NO" << endl;
    }
    return 0;
}
