#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    int k;
    for (int i = 0; i < n; i++)
    {
        int a, x;
        cin >> a >> x;
        if (a == 1)
        {
            v1.push_back(x);
        }
        if (a == 2)
        {
            v2.push_back(x);
        }
        if (a == 3)
        {
            v3.push_back(x);
        }
    }
    /*for(auto it : mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;*/
    int m1 = *max_element(v1.begin(), v1.end());
    int m2 = *min_element(v2.begin(), v2.end());
    if (m2 < m1)
        cout << 0 << endl;
    else
    {
        int c = 0;
        for (auto it : v3)
        {
            if (it >= m1 && it <= m2)
                c++;
        }
        cout << (m2 - m1 - c)+1 << endl;
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}