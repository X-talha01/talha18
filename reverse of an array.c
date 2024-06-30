//reverse of an array
#include<stdio.h>
int main(){
	int i,n,a[100];
	printf("enter value of n");
	scanf("%d",&n);
	printf("enter an array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the reverse array is ");
	for(i=n-1;i>=0;i--)
	printf("%d\n",a[i]);
	return 0;
}
