// Check the triangle is valid or not...
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter the sides of triangle:-"<<endl;
	cin>>a>>b>>c;
	if((a+b)>c&&(a+c)>b&&(c+b)>a){
		cout<<"its is a valid triangle";
	}
	else{
		cout<<"Triangle is not valid by given dimensions";
	}
	return 0;
} 
