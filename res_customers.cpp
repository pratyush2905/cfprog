#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
	int n;
	cin >> n;
	vector<int>arr(n);
	vector<int>dep(n);
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		arr[i]=a;
		dep[i]=b;
	}
	sort(arr.begin(),arr.end());
	sort(dep.begin(),dep.end());
	int arr_p=0,dep_p=0,c=0,ans=0;
	while(arr_p<n && dep_p<n)
	{
		if(arr[arr_p]<=dep[dep_p])
		{
			c++;
			ans=max(ans,c);
			arr_p++;
		}
		else
		{
			c--;
			dep_p++;
		}
	}
	cout<<ans<<endl;
}
signed main()
{
	solve();
}
