#include<stdio.h>
#include<conio.h>

void quickSort(int[],int,int);
int partition(int[],int,int);

void main(){
	int array[20];
	int n,i;
	
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
	
	quickSort(array,0,n-1);
	
	printf("\nYour Data in sorted oder: ");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	
	getch();
}

void quickSort(int array[],int start,int end){
	int j;
	if(start<end){
		j=partition(array,start,end);
		
		quickSort(array,start,j-1);
		quickSort(array,j+1,end);
	}
}

int partition(int array[],int start,int end){
	int endElement=array[end];
	int temp,j,i=start-1;
	
	for(j=start;j<end;j++){
		if(array[j]<endElement){
			i++;
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	}
	
	temp=array[i+1];
	array[i+1]=endElement;
	array[end]=temp;
	
	return i+1;
}