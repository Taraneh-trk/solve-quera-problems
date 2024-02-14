#include <iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	char h=s[0],k=s[1],m=s[2];
	if(h=='Y' && m=='N' && k=='N')
		cout<<"Haji";
	else if(h=='N' && m=='N' && k=='Y')
			cout<<"Karbalaee";
	else if(h=='N' && m=='Y' && k=='N')
			cout<<"Mashti";
	else{
		if(h=='Y')
			cout<<"Haji";
		else if(k=='Y')
				cout<<"Karbalaee";
		else if(m=='Y')
				cout<<"Mashti";
		else
			cout<<"Agha";
	}
	
	return 0;
}
