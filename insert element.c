#include<stdio.h>
int main(){
	int i, n,val,pos,a[10];
	printf("enter value of n");
	scanf("%d",&n);
	printf("enter elements of an array\n");
	for(i=0;i<n;i++)
	scanf("%d",& a[i]);
	printf("enter the value");
	scanf("%d",&val);
	printf("enter the pos");
	scanf("%d",&pos);
	for(i=n-1;i>=pos-1;i--)
	a[i+1]=a[i];
	a[pos-1]=val;
	printf("the updated array is");
	for(i=0;i<=n;i++)
	printf("%d",a[i]);
}
