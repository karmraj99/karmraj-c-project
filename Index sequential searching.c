#include<stdio.h>
#include<conio.h>

void main(){
	int array[50];
	int dividArray[10];
	int block=-1,blockSize=5,blockCount=0;
	int i,n,iterm,loc=-1,start,end,mid;
	
	do{
		printf("How many number you want to input: ");
		scanf("%d",&n);
		
		if(n>50){
			printf("\nInvalid, it should not be greater then 50");
		}
		
		printf("\n\n");
	}while(n>50);
	
	printf("Pls enter the Data in increase or decrease oder.\n");
	for(i=0;i<n;i++){
		printf("Enter the Data %d: ",i+1);
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<n;i=i+blockSize){
		dividArray[blockCount]=array[i];
		blockCount++;
	}
	
	printf("\n\nWhich data location you want to find: ");
	scanf("%d",&iterm);
	
	for(i=0;i<blockCount;i++){
		if(dividArray[i]<=iterm){
			block=i;
		}
	}
	
	if(block == -1) {
        printf("\n\n%d not found in the list!", iterm);
        getch();
        return;
    }
    
    start=block*blockSize;
    end=start+blockSize-1;
    
    if(end >= n) end = n - 1;

    
    for(i=start;i<=end;i++){
    	if(array[i]==iterm){
    		loc=i;
    		break;
		}
	}
	
	if(loc != -1){
        printf("\n\nLocation of %d is index %d", iterm, loc);
	}
    else{
        printf("\n\n%d not found in the list!", iterm);
    }

    getch();
}