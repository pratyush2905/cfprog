#include<bits/stdc++.h>
#define ll long long
using namespace std;
int w,h,n;
bool good(int x)
{
	if((x/w)*(x/h)>=n)
	return true;
	else
	return false;
	
}
int main()
{
	cin>>w>>h>>n;
	int l=0;
	int r=100;
	while(r>l+1)
	{
		int m=(l+r)/2;
		if(good(m))
		r=m;
		else
		l=m;
	}
	cout<<r<<endl;
}
