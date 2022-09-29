//to addd the sum of numbers in array using pointer
#include<stdio.h>
int main()
{
	int i,n,sum =0;
	int arr[10];
	int *p;
	printf("to find the sum of elements\n");
	printf("enter the maximum number of elemnts(max 10):");
	scanf("%d",&n);
	printf("enter the elements:%d",n);
	for(i =0;i<n;i++){
		printf("elemnets:%d",i+1);
		scanf("%d",arr[i]);
	}
	p =arr;
	for(i=0;i<n;i++){
		sum = sum+*p;
		p++;
	}printf("sum of the elements is:%d",sum);
}
