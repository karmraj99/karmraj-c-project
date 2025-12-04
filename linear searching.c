#include<stdio.h>
#include<conio.h>

void main(){
	int array[20];
	int n,i,iterm,location=-1;
	
	do{
		printf("How many number you want to input: ");
		scanf("%d",&n);
		
		if(n>20){
			printf("\nInvalid, it should not be greater then 20");
		}
		
		printf("\n\n");
	}while(n>20);
	
	for(i=0;i<n;i++){
		printf("Enter the Data %d: ",i+1);
		scanf("%d",&array[i]);
		printf("\n");
	}
	
	printf("\n");
	
	printf("Which data location you want to find: ");
	scanf("%d",&iterm);
	
	for(i=0;i<n;i++){
		if(array[i]==iterm){
			location=i;
			printf("\n\nLocation of %d is %d",iterm,location);	
			break;
		}
	}
	
	if(location==-1){
		printf("\n\n%d is not in Data list", iterm);
	}
	
	getch();
}