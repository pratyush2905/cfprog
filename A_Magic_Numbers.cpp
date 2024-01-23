#include <iostream>
#include <string>
 
using namespace std;
 
bool is_magical(string number) {
	for (int i = 0; i < (int)number.size(); i++)
		if (number[i] != '1' && number[i] != '4')
			return false;
 
	if (number[0] == '4')
		return false;
 
	if (number.find("444") != number.npos)
		return false;
 
	return true;
}
int main()
{
    string s;
    cin>>s;
    if(is_magical(s)==true)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}