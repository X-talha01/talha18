//print the factor of a number...
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n:-"<<endl;
     cin>>n;
     int m=1;
     for(int i=1;i<n;i++){
		 if(n%i==0)
     	cout<<i<<" ";
     }
	 return 0;
}
