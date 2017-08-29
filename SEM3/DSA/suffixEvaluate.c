#include<stdio.h>
#include<string.h>

char pop(char []);
void push(char [],int,int);
int check(char);

int top=-1;

main(int argv, char * args[])
{
	int l = strlen(args[1]);
	char stack[l];
	int i=0;
	
	while(args[1] != '\0')
	{
		if(check(args[1][i]))
		{
			push(stack,args[1][i]);
		}
		else
		{
			
		}
	}
	
}

char pop(char stack[])
{
	if(top==-1)
	{
		return;
	}
	else
	{
		top--;
		return(stack[top+1]);
	}
	
}

void push(char stack[],int data,int MAX)
{
	if(top >= (MAX-1))
	{
		return;
	}
	else
	{
		top++;
		stack[top] = data;
	}
	
}

int check(char c)
{
	if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
	{
		return(0);
	}
	else
	{
		return(1);
	}
}
