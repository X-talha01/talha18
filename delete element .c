//delete an element of an array...
#include<stdio.h>
int main(){
	int i, n,pos,a[100];
	printf("enter value of n\t");
	scanf("%d",&n);
	printf("enter elements of an array\n");
	for(i=0;i<n;i++)
	scanf("%d",& a[i]);
	printf("enter the pos\t");
	scanf("%d",&pos);
	if(pos>n)
	printf("delation is not possible");
	else
	for(i=pos-1;i<n-1;i++)
	a[i]=a[i+1];
	for(i=0;i<n-1;i++)
		printf("%d",a[i]);
	}
	
