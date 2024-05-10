//program the table of 19...
//loop runs only 10 times..
#include<iostream>
using namespace std;
int main(){
	for(int i=19;i<=190;i+=19){
		cout<<i<<"  ";
	}
}
//method 2 by if condation ...
//loop runs 190 times...
#include<iostream>
using namespace std;
int main(){
	for(int i=19;i<=190;i++){
		if(i%19==0)
		cout<<i<<"  ";
	}
}
