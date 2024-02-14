#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	pair<int,int> array[8];
	for(int i=0;i<8;i++)
		cin>>array[i].first;
	for(int i=0;i<8;i++)
		cin>>array[i].second;
	int ans=0;
	for(int i=0;i<8;i++)
		if(array[i].first==1 && array[i].second==1)
			ans++;
	
	cout<<ans;
	
	return 0;
}
