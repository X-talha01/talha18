// Display this gb 1 2 4 8 16 ....n n can taken by user through keyboard..
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Chalo karo n ka value enter:-"<<endl;
	cin>>n;
	int a=1;
	cout<<" Looo bachoo app ki GB aagayi..."<<endl;
	for(int i=1;i<=n;i++){
		a*=2;
		cout<<a<<" ";
	}
	return 0;
}
