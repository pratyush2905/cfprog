#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v1(n);
    vector<int> v2(m);
    fr(0, n)
    {
        cin >> v1[i];
    }
    fr(0, m)
    {
        cin >> v2[i];
    }
    sort(all(v1));
    sort(all(v2));
    int x = k / 2;
    int times1 = 0;
    int times2 = 0;
    unordered_set<int> st1;
    unordered_set<int> st2;
    unordered_set<int> uni;
    fr(0, n)
    {
        if (v1[i] <= k)
            st1.insert(v1[i]);
    }
    fr(0, m)
    {
        if (v2[i] <= k)
            st2.insert(v2[i]);
    }
    if (st1.size() < x || st2.size() < x)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        bool flag = true;
        set<int> st;
        for (auto it : st1)
        {
            st.insert(it);
        }
        for (auto it : st2)
        {
            st.insert(it);
        }
        for (int i = 1; i <= k; i++)
        {
            if (st.find(i)==st.end())
            {
                flag=false;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
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