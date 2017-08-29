#include<stdio.h>
#include<string.h>
#define MAX 100

int top=-1;

void push(int stack[],int data){
	if(top>MAX){
		printf("Stack Overflow!!");
		return;
	}
	top++;
	stack[top] = data;
}

int pop(int stack[]){
	if(top < 0){
		return;
	}
	top--;
	return(stack[top+1]);
}

int isOperator(char c){
	if(c=='+' || c=='-' || c=='/' || c=='*' || c=='%'){
		return(1);
	}
	else{
		return(0);
	}
}

main(){

	int i;
	int stack[MAX];
	char c[5];
	
	printf("Suffix Evaluation\nEnter # to stop\n");
	scanf("%s",c);
	
	while(c[0] != '#'){
		if(isOperator(c[0])){
			int a = pop(stack);
			int b = pop(stack);
			switch(c[0]){
				case '+':
					push(stack,a+b);
					break;
				case '-':
					push(stack,a-b);
					break;
				case '/':
					push(stack,a/b);
					break;
				case '*':
					push(stack,a*b);
					break;
				case '%':
					push(stack,a%b);
					break;	 
			}
		}
		else{
			int a =  atoi(c);
			push(stack,a);
		}
		scanf("%s",c);
	}
	printf("%d\n",pop(stack));
}
