/*Program to print Right Half Pyramid Pattern*/
#include<stdio.h>

int main(){
	int i;
	int j;
	printf("----------Right Half Pyramid Pattern----------\n");
	for(i=1;i<=20;i++){
		for(j=i;j<20;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf(".");
		}
		printf("\n");
	}
	return 0;
}

