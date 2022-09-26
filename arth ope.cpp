//to do arthimetic operations
#include<stdio.h>
#include<math.h>
void add(int m,int n)
{
	int j;
	j = m+n;
	printf("the sum of %d +%d is %d",m,n,j);
}

void sub(int m,int n)
{
	int j;
	j = m-n;
	printf("the difference betwen %d - %d is %d",m,n,j);
}
void mul(int m,int n)
{
	int j;
	j = m*n;
	printf("the product of %d*%d is %d",m,n,j);
}
void div(int m,int n)
{
	int j;
	j = m/n;
	printf("divison %d /%d is %d",m,n,j);
}
int main()
{
	int a,b,c;
	printf("enter the number:\n");
	scanf("%d ,%d",&a,b);
	printf("enter 1(addition),2(subtraction),3(multiplication),4(division)");
	scanf("%d",&c);
	if(c ==1){
		add(a,b);
	}else if(c==2){
		sub(a,b);
	}else if(c==3){
		mul(a,b);
	}else if(c==4){
		div(a,b);
	}else{
		printf("inavlid input");
	}return 0;
}
