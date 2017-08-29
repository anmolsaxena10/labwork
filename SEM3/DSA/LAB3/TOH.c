#include<stdio.h>

void TOH(int n,char s,char d,char t){
	if(n==1){
		printf("Move disk 1 from %c to %c\n",s,d);
		return;
	}
	
	TOH(n-1,s,t,d);
	printf("Move disk %d from %c to %c\n",n,s,d);
	TOH(n-1,t,d,s);
}

main(){
	TOH(5,'A','C','B');
}
