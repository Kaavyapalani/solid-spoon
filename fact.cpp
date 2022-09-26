// to find factorial of a positive integer
#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,a=1;
	printf("enter n value:");
	scanf("%d",&n);
	if(n==0){
		printf("the factorial of 0 is 1");
	}
	else if(n>0){
		for( i=1;i<=n;i++){
		a = a*i;
		}
		printf("the factorial of %d is %d",n,a);
	}
	else if(n<0){
		printf("enter only positive numbers");
	}
	else{
		printf("invalid input");
	}
	
	return 0;
}
