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
		cout<<j<<" ";
	}
	cout<<endl;
}
return 0;
   }

