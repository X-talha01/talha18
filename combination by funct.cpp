//combination by function
#include<iostream>
using namespace std;
int fact(int x){
	int f=1;
	for(int i=1;i<=x;i++){
		f = f*i;
	}
	return f;
}
int main(){
	 int n, r;
    cout<<"Enter value of n" << endl;
    cin>>n;
    cout << "Enter value of n" << endl;
    cin>>r;
    int a=fact(n);
     int b=fact(r);
      int c=fact(n-r);
      cout<<a/(b*c);
}

