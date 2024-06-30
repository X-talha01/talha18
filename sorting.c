//using selection sort method sort array in decending order..
#include<stdio.h>
int main(){
	int a[20],i,j,n,temp;
	printf("enter n ");
	scanf("%d",&n);
	printf("enter elements in array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
		if(a[j]<a[i])
		{ 
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;}
	}
	return 0;
}
