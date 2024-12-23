/*---Order of three Number---*/
#include<stdio.h>
int main(){
	int num1;
	int num2;
	int num3;
	
	printf("Enter 1st Number ");
	scanf("%d",&num1);
	
	printf("Enter 2nd Number ");
	scanf("%d",&num2);
	
	printf("Enter 3rd Number ");
	scanf("%d",&num3);
	
	if(num1<num2 && num2<num3){ 
		printf("%d < %d < %d",num1, num2, num3);
	}
	else if(num1<num3 && num3<num2){
		printf("%d < %d < %d",num1, num3, num2);
	}
	else if(num2<num3 && num3<num1){
		printf("%d < %d < %d",num2, num3, num1);
	}
	else if(num2<num1 && num1<num3){
		printf("%d < %d < %d",num2, num1, num3);
	}
	else if(num3<num1 && num1<num2){
		printf("%d < %d < %d",num3, num1, num2);
	}
	else if(num3<num2 && num2<num1){
		printf("%d < %d < %d",num3, num2, num1);
	}
	else if(num1<num2 && num2==num3){
		printf("%d < %d = %d",num1, num2, num3);
	}
	else if(num1>num2 && num2==num3){
		printf("%d = %d < %d",num3, num2, num1);
	}
	else if(num2<num1 && num1==num3){
		printf("%d < %d = %d",num2, num1, num3);
	}
	else if(num2>num1 && num1==num3){
		printf("%d = %d < %d",num1, num3, num2);
	}
	else if(num3<num1 && num1==num2){
		printf("%d < %d = %d",num3, num1, num2);
	}
	else if(num3>num1 && num1==num2){
		printf("%d = %d < %d",num1, num2, num3);
	}
	else{
		printf("%d = %d = %d",num1, num2, num3);
	}
	
	return 0;
}
