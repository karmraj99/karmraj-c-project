#include<stdio.h>
#include<conio.h>

void main(){
	int array[20];
	int i,j,n,temp;
	
	do{
		printf("Enter the size of array: ");
		scanf("%d",&n);
	
		if(n>20){
			printf("Size of array can't more then 20.\n");
		}
	}while(n>20);
	
	printf("\nEnter the data if array.\n");
	for(i=0;i<n;i++){
		printf("Enter the Data %d: ",i+1);
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	
	printf("\nYour Data in sorted oder: ");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	
	getch();
}