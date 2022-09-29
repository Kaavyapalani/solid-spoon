int main()
#include<stdio.h>
{
	float rows,i,j;
	printf("enter the number of rows:");
	scanf("%f",&rows);
	for(i=0.1;i<=rows;i++){
		for(j=0.1;j<=i;j++){
			printf("%0.4f ",i);
		}printf("\n");
	}return 0;
}
