#include<stdio.h>
#include<string.h>


int check(char [],int);

main()
{
	char string[100];
	printf("Enter the string : ");
	scanf("%s",string);
	
	int l = strlen(string);
	
	if(check(string,(l-1)))
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not Palindrome\n");
	}
}

int check(char string[],int i)
{	
	static int j=0;
	if(string[j] != string[i] )
	{
		return(0);
	}
	j++;
	check(string,(i-1));
	return(1);
}
