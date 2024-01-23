#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long c = 0;
    vector<int> v;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n > 1)
    {
        for (long long i = 0; i < n - 1; i++)
        {
            int k = 0;
            for (long long j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[i + k] && arr[j] != arr[i + k])
                {
                    c++;
                    k++;
                }
                else
                    c = 0;
                break;
            }
            v.push_back(c);
        }
        int x = *max_element(v.begin(), v.end());
        cout << x + 1 << endl;
    }
}