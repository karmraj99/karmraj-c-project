#include<stdio.h>

int top=-1;
int stack[20];
void push(int*,int,int); //first int is to point the stack, second int is for data, thride int for how many data user to store
int pop(int*);
void display(int*);

int main(){
	int data,size,choice;
	
	do{
		printf("Enter the size of stack ");
		scanf("%d",&size);
	
		if(size>20){
			printf("invalid side, size can't be greater then 20 \n");
			return 0;
		}
	}while(size>20);
	
	do{
		printf("\n\nMake your choice....\n");
		printf("press 1 to push the data in stack.\n");
		printf("press 2 to pop the data from stack\n");
		printf("press 3 to dispaly the stack\n");
		printf("press 4 to end to program\n");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("\nEnter the data to push in stack ");
				scanf("%d",&data);
				push(stack,data,size);
				display(stack);
				break;
				
			case 2:
				data=pop(stack);
				printf("Popped data is: %d",data);
				break;
				
			case 3:
				display(stack);
		}
	}while(choice!=4);
	return 0;
}

void push(int* stack,int data,int size){
	if(top==size-1){
		printf("\nThe stack is full, pushing can't posible\n");
	}else{
		top++;
		stack[top]=data;
		printf("Pushing is complete:\n");
	}
}

int pop(int* stack){
	int poppedElement;
	
	if(top==-1){
		printf("\nThe stack is empty, poping can't posible");
		return 0;
	}else{
		poppedElement=stack[top];
		top--;
	}
	
	return poppedElement;
}

void display(int* stack){
	int i=0;
	
	printf("Steck element are:");
	while(top>=i){
		printf(" %d",stack[i]);
		i++;
	}
}