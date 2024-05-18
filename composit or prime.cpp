// check the number is prime or composit..
// through bool flag
   #include<iostream>
   using namespace std;
   int main(){
   	int n;
   	cout<<"enter value of n"<<endl;
   	cin>>n;
   	bool flag=true;//true means prime
   	for(int i=2;i<=n/2;i++){
   		if(n%i==0)
		   {
		   	flag=false;//means composit
		   	break;}
	   }
	   if(n==1)cout<<"neither prime nor composit"<<endl;
	   else if( flag==true)cout<<"prime"<<endl;
	   else cout<<"composit"<<endl;
	   return 0;
	      }
   
