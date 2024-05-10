//display the Ap 4 7 10 13...
// method 2 to solve this problem..
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Chalo karo n ka value enter:-"<<endl;
	cin>>n;
	int a=4;
	cout<<" Looo bachoo app ki Ap aagayi..."<<endl;
	for(int i=1;i<=n;i++){
		a+=3;
		cout<<a<<" ";
	}
	cout<<"your ap is here:-";
	return 0;
}
