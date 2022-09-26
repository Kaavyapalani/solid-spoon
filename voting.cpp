//to find the person is eligible for voting
#include<stdio.h>
int main(){
	int a;
	printf("enter the age:");
	scanf("%d",&a);
	if(a>= 18){
		printf("the person is eligible for voting");
	}else{
		printf("the person is not eligible for voting");
	}return 0;
}
