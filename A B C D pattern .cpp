//Print the given pattern by neasted loop
/* A B C D 
   A B C D
   A B C D
   A B C D
   */
   #include<iostream>
   using namespace std;
   int main(){
   	int side;
cout<<"enter the sides of square:-";
cin>>side;
for(int i=1;i<=side;i++){
	for(int j=1;j<=side;j++){
		cout<<(char)(j+64)<<" ";//typecasting;
	}
	cout<<endl;
}
return 0;
   }

