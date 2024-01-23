#include<bits/stdc++.h>
using namespace std;
string remove(string s)
{
  regex pattern("WUB");
  string t=regex_replace(s,pattern," ");
  return t;
}
int main()
{
  string s;
  cin>>s;
  string ans=remove(s);
  cout<<ans;

}