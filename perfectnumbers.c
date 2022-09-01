//to  print the perfect numbers
#include<stdio.h>
int main(){
	int n, count=0;
	printf("N =");
	scanf("%d",&n);
	for (int i= 1; i<1000000;i++){
		int sum =0;
		for (int j= 1; j =i; j++){
			if(i%j ==0){
				sum = sum+i;	
			}
		}
		if(sum== i){		
			printf("the %d perfect numbers are %d",n,i);
			count = count+1;
			if(count == n){
				break;
			}
		}
	}
}