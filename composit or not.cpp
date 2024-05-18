/* Check the number is composit or not*/
          #include<iostream>
          using namespace std;
          int main(){
          	int n;
          	cout<<"Enter value of n:-"<<endl;
          	cin>>n;
          	for(int i=2;i<=n/2;i++){
          	if(n%i==0)
          	cout<<"composit"<<" "<<endl;
          	cout<<"thanku";
          	break; //to get out from the loop..
			  }
			  return 0;
		  }
