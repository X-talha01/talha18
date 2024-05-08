//Check the number is divisible by both 5&3...
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter value of num"<<endl;
	cin>>num;
	if(num%5==0&&num%3==0){
		cout<<"Number is divisible by both 3&5";
	}
	else{
		cout<<"Not divisible by 3 & 5";
	}
	return 0;
}
