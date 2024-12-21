/*---Program for write Teble of any Number---*/
#include<stdio.h>
int main(){
	
	int num;
	int times;
	int c;
		
	printf("Enter the Numer  ");
	scanf("%d",&num);
	
	printf("Enter the how many Times you want ");
	scanf("%d",&times);
	
	for(int i=1;i!=1+times;i++){
		c=num*i;
		printf("%d X %d = %d\n",num,i,c);
	}
	
	return 0;
}
