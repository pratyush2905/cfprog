#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main ()
{
  int t;
  cin >> t;
  while (t--)
    {
      ll x1, x2;
      ll p1, p2;
      cin >> x1 >> p1;
      cin >> x2 >> p2;
      string s1 = to_string (x1);
      string s2 = to_string (x2);
      for (int i = 0; i < p1; i++)
	{
	  s1 = s1 + "0";
	}
      for (int i = 0; i < p2; i++)
	{
	  s2 = s2 + "0";
	}
      if (stoi (s1) < stoi (s2))
	{
	  cout << "<" << endl;
	}
      else if (stoi (s1) > stoi (s2))
	{
	  cout << ">" << endl;
	}
      else
	{
	  cout << "=" << endl;
	}
    }

}
