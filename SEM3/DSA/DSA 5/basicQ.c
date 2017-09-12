#include<stdio.h>
#include<stdlib.h>

int front = -1,rear = -1;

void qInsert(int Q[],int N,int data){
	if(rear == (N-1)){
		printf("Overflow");
		return;
	}
	
	Q[++rear] = data;
	
	if(front == -1){
		front++;
	}
}

int qDelete(int Q[],int N){
	if(front == -1){
		printf("UnderFlow");
		return(-1);
	}
	
	int x = Q[front];
	
	if(front == rear){
		front = -1;
		rear = -1;
	}
	else{
		front++;
	}
	
	return(x);
}

void qView(int Q[]){
	int i;
	
	for(i=front;i<=rear;i++){
		printf("%d--",Q[i]);
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
				qInsert(Q,N,data);
				break;
			case 2:
				printf("%d deleted successfully\n",qDelete(Q,N));
				break;
			case 3:
				qView(Q);
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
