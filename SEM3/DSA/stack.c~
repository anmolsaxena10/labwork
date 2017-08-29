#include<stdio.h>
#include<stdlib.h>

#define MAX 5

void push(int [],int);
void pop(int []);
void peep(int [],int);
void change(int [],int,int);
void view(int []);

int top = -1;

main()
{
	int stack[MAX];
	int choice,data;
	int t;
	char c;	
		
	while(1)
	{
		printf("\tMENU\n1)Push\n2)Pop\n3)Peep\n4)Change\n5)View\n6)Exit\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter data : ");
				scanf("%d",&data);
				push(stack,data);
				break;
			case 2:
				pop(stack);
				break;
			case 3:
				printf("Enter number of element : ");
				scanf("%d",&t);
				peep(stack,t);
				break;
			case 4:
				printf("Enter number of element to change : ");
				scanf("%d",&t);
				printf("Enter the new value : ");
				scanf("%d",&data);
				change(stack,t,data);
				break;
			case 5:
				view(stack);
				break;
			case 6:
				exit(0);
			default:
				printf("Invalid input !!!\n");
				continue;
		}
		
		printf("Press enter to continue..... ");
		scanf("%c",&c);
		scanf("%c",&c);
		if(c == '\n')
		{
			system("clear");
		}
	}
}

void push(int stack[],int data)
{
	if(top >= (MAX-1))
	{
		printf("Stack overflow!!!!\n");
		return;
	}
	else
	{
		top++;
		stack[top] = data;
		printf("Data entered sucessfully\n");
	}
	
}

void pop(int stack[])
{
	if(top==-1)
	{
		printf("Stack empty.....UnderFlow!!!!\n");
	}
	else
	{
		printf("%d element poped\n",stack[top]);
		top--;
	}
	
}

void view(int stack[])
{
	printf("The stack is : \n");
	int t = top;
	
	while(t != -1)
	{
		printf("%d\n",stack[t]);
		t--;
	}
	
}

void peep(int stack[],int n)
{
	if(n > (top+1))
	{
		printf("Index out of Bound\n");
	}
	else
	{
		printf("The requested value is %d\n",stack[top-n+1]);	
	}
}

void change(int stack[],int n,int data)
{
	if(n > (top+1))
	{
		printf("Index out of Bound\n");
	}
	else
	{
		stack[top-n+1] = data;
	}
}
