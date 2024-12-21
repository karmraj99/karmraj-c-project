/*----Addition of two number----*/
#include<stdio.h>

int main(){
	int num1;
	int num2;
	int sum;

	printf("Enter the first Number ");
	scanf("%d",&num1);

	printf("\nEnter the Seconde Number ");
	scanf("%d",&num2);
	
	sum=num1+num2;
	
	printf("\nSum of %d and %d = %d",num1,num2,sum);
	
	return 0;
}
