#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int v[12];
    for (int i = 0; i <12; i++)
    {
        cin >> v[i];
    }
    sort(v,v+12);
    int s = 0;
    int c = 0;
    int i=11;
    while (i>=0 && s<k)
    {
        s += v[i];
        c++;
        i--;
    }
    if (s >= k)
        cout << c << endl;
    else
        cout << -1 << endl;
}