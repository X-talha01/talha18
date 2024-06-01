//function next method...
#include<iostream>
using namespace std;
void usa(){
	cout<<"you are in usa"<<endl;
}
 void india(){
 	cout<<"you are in india"<<endl;
 usa();}//india sai hii usa ko b call ki
 
 int main(){
 	cout<<"phla ya main mai jata hai"<<endl;
 	india();// mai sai hii india ko call ki
 	return 0;
 }
