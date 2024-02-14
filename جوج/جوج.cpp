#include <iostream>
using namespace std;
bool resid(int array[],int n){
	for(int i=1;i<n-1;i++)
		if(array[i-1]<array[i] && array[i]>array[i+1])
			return false;
	return true;
}
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
		cin>>array[i];
	if(resid(array,n))
		cout<<"Bah Bah! Ajab jooji!";
	else
		cout<<"Ey baba :(";
	
	return 0;
}
