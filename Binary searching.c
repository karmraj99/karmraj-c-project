#include<stdio.h>
#include<conio.h>

void main(){
	int array[20];
	int n,i=0,start,end,mid,iterm,loc=-1;
	
	do{
		printf("How many number you want to input: ");
		scanf("%d",&n);
		
		if(n>20){
			printf("\nInvalid, it should not be greater then 20");
		}
		
		printf("\n\n");
	}while(n>20);
	
	printf("Pls enter the Data in increase oder.");
	printf("\n");
	for(i=0;i<n;i++){
		printf("Enter the Data %d: ",i+1);
		scanf("%d",&array[i]);
	}
	
	printf("\n\nWhich data location you want to find: ");
	scanf("%d",&iterm);
	
	start=0;
	end=n-1;
	
	while(start<=end){
		mid=(start+end)/2;
		
		if(array[mid]==iterm){
			loc=mid;
			printf("\n\nLocation of %d is %d",iterm,loc);	
			break;
		}else if(array[mid]<iterm){
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	
	if(loc==-1){
		printf("\n\n%d is not in Data list", iterm);
	}
	
	getch();
}