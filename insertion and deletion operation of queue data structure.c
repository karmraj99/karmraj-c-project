#include<stdio.h>

int queue[20];
int front=-1;
int rear=-1;

void insertion(int,int);
void deletion();
void display();

void main(){
	int data;
	int maxsize;
	int choice;
	
	do{
		printf("Enter the size Queue: ");
		scanf("%d",&maxsize);
	}while(maxsize>20);
	
	do{
		printf("\nPress 1 for insertion.");
		printf("\nPress 2 for Deletion.");
		printf("\nPress 3 for Display.");
		printf("\nPress 4 for End Program.");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
	
		switch(choice){
		case 1:
			printf("\n\nEnter the data: ");
			scanf("%d",&data);
			insertion(data,maxsize);
			display();
			break;
		case 2:
			deletion();
			display();
			break;
		case 3:
			printf("\n");
			display();
	}
	}while(choice!=4);
}

void insertion(int data,int maxsize){
	if(rear==maxsize-1){
		printf("\nQueue is full.");
		printf("\n");
	}else{
		rear++;
		queue[rear]=data;
		
		if(front==-1){
			front++;
		}
	}
}

void deletion(){
	int temp;
	if(front==-1){
		return;
	}else{
		temp=queue[front];
		front++;
		
		if(front>rear){
			front=-1;
			rear=-1;
		}
		
		printf("\n%d is deleted",temp);
	}
	
}

void display(){
	int i=front;
	
	if(front==-1){
		printf("\nQueue is empty");
		printf("\n");
		return;
	}
	
	printf("\nQueue element are:");
	while(rear>=i){
		printf(" %d",queue[i]);
		i++;
	}
}