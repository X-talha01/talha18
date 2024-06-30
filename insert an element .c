#include<stdio.h>
int main(){
	int a[10],n,i,val,p;
	printf("%d",&n);
	printf("enter the elements of an array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the element that you want to insert\n");
	scanf("%d",&val);
	printf("enter the position where you want to insert");
	scanf("%d",&p);
	for(i=(n-1);i>=(p-1);i--)
	a[i+1]=a[i];
	a[p-1]=val;
	printf("the updated array is\n");
	for(i=0;i<=n-1;i++)
	printf("%d",a[i]);
	return 0;
}
