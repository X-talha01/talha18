  //switch statement...
		   /*program for create a calculator
		to perform basic arthematic operations
	 (addation,multliplication,stbtraction,division)*/
	  #include<iostream>
	  using namespace std;
	  int main(){
	  	int num1,num2;
	  	cout<<"Enter number one:-"<<endl;
	  	cin>>num1;
	  	cout<<"Enter number two:-"<<endl;
	  	cin>>num2;
	  	char op;//op:-operator
	  	cout<<"Enter the operator"<<endl;
	  	cin>>op;
	  	switch (op){
	  		case '+':
	  			cout<<num1+num2<<endl;
	  			break;
	  				case '-':
	  			cout<<num1-num2<<endl;
	  			break;
	  				case '*':
	  			cout<<num1*num2<<endl;
	  			break;
	  				case '/':
	  			cout<<num1/num2<<endl;
	  			break;
	  				case '%':
	  			cout<<num1%num2<<endl;
	  			break;
	  			default: 
	  			cout<<"Invalid operator please give a correct one and try again";
		  }	
	  }       
