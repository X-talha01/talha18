#include<stdio.h>
int main(){
	int a[5],i;
	printf("enter the elements of an array");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("these are the elements of an array");
	for(i=0;i<5;i++)
	printf("%d",a[i]);
	return 0;
	
}
