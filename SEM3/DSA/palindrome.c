#include<stdio.h>
#include<string.h>

char pop(char []);
void push(char [],int,int);

int top=-1;

main()
{
	char string[100];
	printf("Enter the string :");
	scanf("%s",string);
	
	int l,i;
	l = strlen(string);
	char stack[(l/2)];
			
	for(i=0;i<(l/2);i++)
	{
		push(stack,string[i],(l/2));
	}
	
	if(l%2==0)
	{
		while(i < l)
		{
			if(pop(stack) != string[i])
			{
				printf("Not palindrome\n");
				return;
			}
			i++;
		}
	}
	else if(l%2!=0)
	{	
		i++;
		while(i < l)
		{
			if(pop(stack) != string[i])
			{
				printf("Not Palindrome");
				return;
			}
			i++;
		}
	}
	
	printf("String is a Palindrome\n");
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
