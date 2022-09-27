#include<stdio.h>
int main(){
	int n;
	printf("Enter the how many elements do u want : ");
	scanf("%d",&n);
	int arr[n];
	for(int k=0;k<n;k++){
		scanf("%d",&arr[k]);
	}
	int com_count=0;
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=1;j<=arr[i];j++){
			if(arr[i]%j==0){
				count++;
			}
		}
		if(count!=2){
		com_count++;
		}
	}
	printf("Number of Composite Numbers = %d",com_count);
}
