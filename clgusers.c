#include<stdio.h>
int main(){
	int user,staff,student,b;
	printf("total number of user:");
	scanf("%d",&user);
	printf("enter the staff user:");
	scanf("%d",&staff);
	b =staff/3;
	if(user == staff){
		printf("invalid input");
	}
	else if(user >0 && user>staff){
		student =user-(staff +b);
		printf("total student user is:%d",student);
	}
	else{
		printf("invalid input");
	}
	return 0;
}	
	