/*Program to print Pyramid Pattern*/
#include<stdio.h>

int main(){
	printf("----------Pyramid Pattern----------\n");
	for(int i=1;i<=21;i++){
		for(int j=i;j<21;j++){
			printf(" ");
		}
			for(int k=1;k<=(2*i-1);k++){
				printf(".");
			}	
		printf("\n");
	}
	return 0;
}

