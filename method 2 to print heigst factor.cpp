/* method two to print heighst factoe of number
          and runs less times loop*/
          #include<iostream>
          using namespace std;
          int main(){
          	int n;
          	cout<<"Enter value of n:-"<<endl;
          	cin>>n;
          	for(int i=n/2;i>=1;i--){
          	if(n%i==0)
          	cout<<i<<" "<<endl;
          	cout<<"thanku";
          	break; //to get out from the loop..
			  }
			  return 0;
		  }
