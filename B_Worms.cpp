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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pref1(n);
    vector<int> pref2(n);
    pref1[0] = v[0];
    pref2[0] = 1;
    fr(1, n)
    {
        pref1[i] = pref1[i - 1] + v[i];
    }
    /*for(auto it : pref1)
    {
        cout<<it<<" ";
    }
    cout<<endl;*/
    fr(1, n)
    {
        pref2[i] = pref1[i - 1] + 1;
    }
    /*for(auto it : pref2)
    {
        cout<<it<<" ";
    }
    cout<<endl;*/
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it1 = lower_bound(all(pref1), x);
        auto it2 = lower_bound(all(pref2), x);
        //cout << it1-pref1.begin() << " " << it2-pref2.begin() << endl;
        if(*it1!=x && *it2!=x)
        {
            cout<<min(it1-pref1.begin()+1,it2-pref2.begin()+1)<<endl;
        }
        else
        {
            if(*it1==x)
            {
                cout<<it1-pref1.begin()+1<<endl;
            }
            else if (*it2==x)
            {
                cout<<it2-pref2.begin()+1<<endl;
            }
        }
    }
}
signed main()
{
    int t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}