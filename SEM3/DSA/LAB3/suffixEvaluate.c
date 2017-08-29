#include<stdio.h>
#include<string.h>

int top=-1;

void push(int stack[],int data,int l){
	if(top>=l){
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
	if(c=='+' || c=='-' || c=='/' || c=='*' ){
		return(1);
	}
	else{
		return(0);
	}
}



main(int argv, char *args[]){

	int l = strlen(args[1]);
	int i;
	int stack[l];
	
	for(i=0 ; i<l ; i++){
		if(isOperator(args[1][i])){
			int a = pop(stack);
			int b = pop(stack);
			switch(args[1][i]){
				case '+':
					push(stack,a+b,l);
					break;
				case '-':
					push(stack,a-b,l);
					break;
				case '/':
					push(stack,a/b,l);
					break;
				case '*':
					push(stack,a*b,l);
					break; 
			}
		}
		else{
			int a = args[1][i] - '0';
			push(stack,a,l);
		}
	}
	printf("%d\n",pop(stack));
}
