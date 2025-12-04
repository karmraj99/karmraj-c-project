#include<stdio.h>
#include<conio.h>

void main(){
	int array[20];
	int i,j,n,min,loc,temp;
	
	do{
		printf("Enter the size of array: ");
		scanf("%d",&n);
		
		if(n>20){
			printf("Size can't not be more then 20\n\n");
		}
	}while(n>20);
	
	printf("\nEnter the Data:\n");
	for(i=0;i<n;i++){
		printf("Enter the Data %d: ",i+1);
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<n-1;i++){
		min=array[i];
		loc=i;
		
		for(j=i+1;j<n;j++){
			if(array[j]<min){
				min=array[j];
				loc=j;
			}
		}
		
		temp=array[i];
		array[i]=min;
		array[loc]=temp;
	}
	
	printf("\nYour Data in sorted oder: ");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	
	getch();
}