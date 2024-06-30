//find an even odd elements of an array
#include<stdio.h>
int main(){
	int i,n,a[10],b[10],c[10],j=0,k=0;
	printf("enter value of n");
	scanf("%d",&n);
	printf("enter elements of an array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	if(a[i]%2==0){
		b[j]=a[i];
		j++;
	}
	else{
		c[k]=a[i];
		k++;
	}
	printf("even number:-\t");
	for(i=0;i<j;i++){
		printf("%d",b[i]);
	}
	printf("odd number:-\t");
	for(i=0;i<k;i++){
		printf("%d",c[i]);
	}
	return 0;
}
