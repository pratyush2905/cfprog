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
    string s;
    cin >> s;
    vector<int> pref(n, 0), suff(n, 0);
    set<char>st;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        pref[i] = st.size();
    }
    st.clear();
    for (int i = n - 1; i >= 0 ; i--)
    {
        st.insert(s[i]);
        suff[i] = st.size();
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, pref[i] + suff[i + 1]);
    }
    cout << ans << endl;
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


/*
#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
using namespace std;
void solve()
{

}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}*/