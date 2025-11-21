#include<stdio.h>
#include<string.h>

int top=-1;
char stack[20];
int max=20;

void push(char);
char pop();

void main(){
	char string[20];
	int i=0,j=0;
	char temp[20];
	
	printf("Enter the string: ");
	fgets(string, sizeof(string), stdin);
	
	string[strcspn(string, "\n")] = '\0';
	
	while(i<strlen(string)){
		push(string[i]);
		i++;
	}

	while(j<strlen(string)){
		temp[j]=pop();
		j++;
	}
	
	temp[j]='\0';
		
	printf("\nThe reverse string is: ");
	puts(temp);
}

void push(char charater){
	if(top==max-1){
		printf("\nVery large String");
	}else{
		top++;
		stack[top]=charater;
	}
}

char pop(){
	char ch;
	
	if(top==-1){
		printf("\nYou didn't enter any string");
	}else{
		ch=stack[top];
		top--;
	}
	
	return ch;
}