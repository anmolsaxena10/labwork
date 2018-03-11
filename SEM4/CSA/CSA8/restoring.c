#include<stdio.h>

int shift(int a[], int n, int direction, int insert){
	int i,extra=0;
	if(direction>0){
		extra = a[n-1];
		for(i=n-1 ; i>0 ; i--){
			a[i] = a[i-1];
		}
		a[0] = insert;
	}
	else{
		extra = a[0];
		for(i=0 ; i<n-1 ; i++){
			a[i] = a[i+1];
		}
		a[n-1] = insert;
	}
	return(extra);
}

void add(int a[], int b[], int n){
	int i,carry=0;
	for(i=n-1 ; i>=0 ; i--){
		 int temp = a[i] + b[i] + carry;
		 if(temp == 2){
		 	a[i] = 0;
		 	carry = 1;
		 }
		 else if(temp==3){
		 	a[i] = 1;
		 	carry = 1;
		 }
		 else{
		 	a[i] = temp;
		 	carry = 0;
		 }
	}
}

void twoComplement(int a[], int n){
	int i,flag=0;
	for(i=n-1 ; i>=0 ; i--){
		if(flag==0 && a[i]==1){
			flag=1;
		}
		else if(flag){
			if(a[i]==0){a[i]=1;}
			else{a[i]=0;}
		}
	}
}

void sub(int a[], int b[], int n){
	twoComplement(b,n);
	add(a,b,n);
	twoComplement(b,n);
}

int main(){
	int n,i;
	
	printf("Enter size: ");
	scanf("%d",&n);
	
	int acc[n],mq[n],div[n];
	
	printf("\nEnter a: ");
	for(i=0 ; i<n ; i++){
		acc[i]=0;
		scanf("%d",&mq[i]);
	}
	
	printf("\nEnter b: ");
	for(i=0 ; i<n ; i++){
		scanf("%d",&div[i]);
	}
	
	for(i=0 ; i<n ; i++){
		shift(acc,n,-1,shift(mq,n,-1,-1));
		sub(acc,div,n);
		if(acc[0]==1){
			add(acc,div,n);
			mq[n-1] = 0;
		}
		else{
			mq[n-1] = 1;
		}
	}
	
	printf("\nAns is : ");
	for(i=0 ; i<n ; i++){
		printf("%d ",mq[i]);
	}
	printf("\nRemainder is : ");
	for(i=0 ; i<n ; i++){
		printf("%d ",acc[i]);
	}
	printf("\n");
}
