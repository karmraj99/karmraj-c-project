#include<stdio.h>
#include<conio.h>

void main(){
	int array[20];
	int i,j,n,temp;
	
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
	
	for(i=1;i<n;i++){
		temp=array[i];
		j=i-1;
		
		while(array[j]>temp && j>=0){
			array[j+1]=array[j];
			j--;
		}
		
		array[j+1]=temp;
	}
	
	printf("\nYour Data in sorted oder: ");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	
	getch();
}