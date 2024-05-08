// writing a program to check the Number is divisible by 3 or 5 but not 15...
    #include<iostream>
    using namespace std;
    int main(){
    	int num;
	cout<<"enter value of num"<<endl;
	cin>>num;
	if((num%5==0)||(num%3==0)&&(num%15!=0))
	{
		cout<<"Number is divisible by 5 or 3 but not by 15(both)";
	}
	return 0;
	}
