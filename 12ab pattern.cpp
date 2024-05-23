//Print the given triangle by neasted loop
/* 1
   1 2 
   1 2 3 
   */
   #include<iostream>
   using namespace std;
   int main(){
   
   	int row;
cout<<"enter the no. of rows:-";
cin>>row;
for(int i=1;i<=row;i++){
	for(int j=1;j<=i;j++){
		if(i%2==0){
		
		cout<<char('A'+j-1)<<" ";
	}
	else{
	
	cout<<j;}
	
}
cout<<endl;
}
return 0;
}

