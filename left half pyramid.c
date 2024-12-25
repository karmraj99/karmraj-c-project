/*Program to print left Half Pyramid Pattern*/
#include<stdio.h>

int main(){
	printf("----------Left Half Pyramid Pattern----------\n");
	for(int i=1;i<=20;i++){
		for(int k=1;k<=i;k++){
			printf(".");
		}
		printf("\n");
	}
	return 0;
}

