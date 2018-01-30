#include<stdio.h>

void makeChange(int c[], int amount){
	int i,a[5];
	for(i=0;i<5;i++)
	{	
		a[i]=0;
		a[i]=amount/c[i];
		amount=amount%c[i];
	}
	if(amount!=0)
	{
		printf("Not possible\n");
	}
	else
	{
		for(i=0;i<5;i++)
		{
			printf("%d ",a[i]);
		}
	}
}

int main()
{
	int c[5]={100,25,10,5,1},amount;
	printf("Enter ammount: ");
	scanf("%d",&amount);
	
	makeChange(c, amount);
	
	
}
	
