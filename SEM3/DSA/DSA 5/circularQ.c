#include<stdio.h>
#include<stdlib.h>

int front=-1,rear=-1;

void cqInsert(int Q[],int N,int data){
	if(rear == (N-1)){
		rear = 0;
	}
	else{
		rear++;
	}
	if(rear == front){
		printf("OverFlow\n");
		if(rear == 0){
			rear = N-1;
		}
		else{
			rear--;
		}
		return;
	}
	
	Q[rear] = data;
	printf("Data entered Successfully\n");
	
	if(front == -1){
		front++;
	}
}

int cqDelete(int Q[],int N){
	if(front == -1){
		printf("UnderFlow");
		return;
	}
	
	int x = Q[front];
	
	if(front == rear){
		front = -1;
		rear = -1;
	}
	if(front == (N-1)){
		front = 0;
	}
	else{
		front++;
	}
	
	return(x);
}

void cqView(int Q[],int N){
	int i,j=0;
	
	for(i=0;i<(N-front-rear+1);i++){
		
		if((front+i) <= (N-1)){
			printf("%d--",Q[front+i]);
		}
		else{
			printf("%d--",Q[j]);
			j++;
		}
	}
}

main(){
	int choice,data,N;
	char c;
	
	system("clear");
	
	printf("Enter size of Queue : ");
	scanf("%d",&N);
	
	int Q[N];
	
	
	system("clear");
	
	while(1){
		printf("\tMENU\n1)Insert\n2)Delete\n3)View\n4)Exit\n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("Enter data : ");
				scanf("%d",&data);
				cqInsert(Q,N,data);
				break;
			case 2:
				printf("%d deleted successfully\n",cqDelete(Q,N));
				break;
			case 3:
				cqView(Q,N);
				break;
			case 4:
				exit(0);
			default : 
				printf("Invalid Input!!");
				continue;
		}
		printf("\nPress Enter to continue....\n");
		scanf("%c",&c);
		scanf("%c",&c);
		if(c == '\n'){
			system("clear");
		}
	}
}


