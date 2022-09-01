#include<stdio.h>
int main()
{
	int i,sum=0,num;
	printf("enter the number:");
	scanf("%d",&num);
	for (i=1;i<num;i++){
		if(num%i==0){
				sum = sum+i;
		}
    }
	if(num==sum){
		printf("the given number is perfect number");
	}else{
		printf("the given number is not a perfect number");
		}
	return 0;
}
