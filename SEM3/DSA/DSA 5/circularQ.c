#include<stdio.h>
#include<stdlib.h>

int front=-1,rear=-1;

void cqInsert(int Q[],int N,int data){
	if((front == 0 && rear == N-1) || (rear == front-1)){
		printf("OverFlow\n");
		return;
	}
	
	else if(front == -1){
		front = 0;
		rear = 0;
		Q[rear] = data;
	}
	else if(rear == N-1 && front != 0){
		rear = 0;
		Q[rear] = data;
	}
	
	else{
		rear++;
		Q[rear] = data;
	}
}

int cqDelete(int Q[],int N){
	if(front == -1){
		printf("UnderFlow");
		return(-1);
	}
	
	int x = Q[front];
	Q[front] = -1;
	
	if(front == rear){
		front = -1;
		rear = -1;
	}
	else if(front == (N-1)){
		front = 0;
	}
	else{
		front++;
	}
	
	return(x);
}

void cqView(int Q[],int N){
	int i;
	
	if(front == -1){
		printf("EmptyQueue\n");
		return;
	}
	if( rear >= front){
		for(i=front ; i<= rear ; i++){
			printf("%d--",Q[i]);
		}
	}
	else{
		for(i=front ; i<N ; i++){
			printf("%d--",Q[i]);
		}
		for(i=0 ; i<=rear ; i++){
			printf("%d--",Q[i]);
		}
	}
}

int main(){
	int choice,data,N;
	char c;
	
	system("cls");
	
	printf("Enter size of Queue : ");
	scanf("%d",&N);
	
	int Q[N];
	
	
	system("cls");
	
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
			system("cls");
		}
	}
}


