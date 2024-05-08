/*Determin weather tha seller made profint or loss
        And  how much he made..*/
        #include<iostream>
        using namespace std;
        int main(){
        	int cp,sp;
       cout<<"Please enter a Cost price:-"<<endl;
	     cin>>cp;
			cout<<"Please selling price:-"<<endl;
			  cin>>sp;
			    if(sp>cp){
			  	  cout<<"seller made profit= "<<(sp-cp);
			  } 	  	
    else if(sp<cp){
     	cout<<"seller made loss= "<<(cp-sp);	
				 }
				 return 0;
		}

