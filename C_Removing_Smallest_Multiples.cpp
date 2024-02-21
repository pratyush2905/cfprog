#include <bits/stdc++.h>
#define int long long
#define fr(a, b) for (int i = a; i < b; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define mod 1000000007
// जय श्रीराम //
using namespace std;
int isPrime(int n)
{
    bool flag = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
        return 0;
    else
        return 1;
}
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    str = '@' + str;
    int c = 0;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (str[i] == '1')
        {
            v[i] = 2;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            if(v[j]==0)
            {
                v[j]=1;
                c+=i;
            }
            else if(v[j]==2)
            {
                break;
            }
        }
    }
    cout<<c<<endl;
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