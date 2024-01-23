#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> s;
    int k = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        string t = c[k] + c[k + 1];
        string s2 = c[i] + c[i + 1];
        if (t == s2)
        {
            c++;
        }
        max=c;
    }