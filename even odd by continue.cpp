//wap to print odd numbers by taking input by user 
//using continue if n = even skip a round..
  #include<iostream>
  using namespace std;
  int main(){
  	int n;
  	cout<<"Enter value of n:-"<<endl;
  	cin>>n;
  	for(int i=1;i<=n;i++){
  		if(i%2==0)
  		continue;//skip a round
  		else if(i%2!=0)
  		cout<<i<<" ";
	  }
	  return 0;
  }   
