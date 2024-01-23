#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
	int n,m;
	cin>>n>>m;
	vector<int>h(n);
	for(int i=0;i<n;i++)
	{
		cin>>h[i];
	}
	vector<int>t(m);
	for(int i=0;i<m;i++)
	{
		cin>>t[i];
	}
	sort(h.begin(),h.end());
	multiset<int>ms;
	for(int i=0;i<n;i++)
	{
		ms.insert(h[i]);
	}
	vector<int>v;
	for(int i=0;i<m;i++)
	{
		auto a =ms.lower_bound(t[i]);
		if(a!=ms.end() && *a==t[i])
		{
			v.push_back(*a);
			ms.erase(a);
		}
		else if(a!=ms.begin())
		{
			a--;
			v.push_back(*a);
			ms.erase(a);
		}
		else
		{
			v.push_back(-1);
		}
	}
	for(auto it:v)
	{
		cout<<it<<endl;
	}
}
signed main()
{
	solve();
}
