// display the ap 1 3 5 7 9... upto n terms 
// method 1 by mathematically..
//  nth term formula  an=a+(n-1)d
// an=1+(n-1)2
// = 1+(2n-2)
//  =2n-1
        //problem solution...
        #include <iostream>
	using namespace std;
	int main(){
		int n;
		cout<<"enter the value of n"<<endl;
		cin>>n;
		for(int i=1;i<=2*n-1;i+=2){
			cout<<i<<" ";
		}
	}
 
