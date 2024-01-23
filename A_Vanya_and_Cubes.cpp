#include <bits/stdc++.h>
using namespace std;
int sumn(int k)
{
    int sum = 0;
    int i = 1;
    while (i <= k)
    {
        sum = sum + i;
        i++;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int lvl = -1;
    int i = 1;
    int x = 0;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        while (x <= n)
        {
            x += sumn(i);
            lvl = lvl + 1;
            i++;
        }
        cout << lvl << endl;
    }
}