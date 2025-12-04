#include<stdio.h>
#include<conio.h>

int array[20];
int iterm;
int n;

int searching(int,int);

void main(){
	int i=0,start,end,loc=-1;
	
	do{
		printf("How many number you want to input: ");
		scanf("%d",&n);
		
		if(n>20){
			printf("\nInvalid, it should not be greater then 20");
		}
		
		printf("\n\n");
	}while(n>20);
	
	printf("Pls enter the Data in increase or decrease oder.");
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter the Data %d: ",i+1);
		scanf("%d",&array[i]);
	}
	
	printf("\n\n");
	
	printf("Which data location you want to find: ");
	scanf("%d",&iterm);
	
	start=0;
	end=n-1;
	
	loc=searching(start,end);
	
	if(loc!=-1){
		printf("\n\nLocation of %d is %d",iterm,loc);	
	}else{
		printf("\n\n%d is not in Data list", iterm);
	}
	
	getch();
}

int searching(int start,int end){
	int mid;
	
	mid=(start+end)/2;
	
	if(array[mid]==iterm){
		return mid;
	}else if(array[mid]<iterm){
		start=mid+1;
	}else{
		end=mid-1;
	}
	
	searching(start,end);
}