//Print the given pattern by neasted loop
/* 1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4
   */
   #include<iostream>
   using namespace std;
   int main(){
   	int side;
cout<<"enter the sides of square:-";
cin>>side;
for(int i=1;i<=side;i++){
	for(int j=1;j<=side;j++){
		cout<<j;
	}
	cout<<endl;
}
return 0;
   }

