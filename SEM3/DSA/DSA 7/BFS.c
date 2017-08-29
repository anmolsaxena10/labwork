#include<stdio.h>
#include<stdlib.h>

/* QUEUE FUNCTONS */
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
		return;
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
/* QUEUE FUNCTONS END */


/* ADJECENCY LIST FUNCTIONS */
int v;

typedef struct adjListStruct{
	int data;
	struct adjListStruct *next;
} node;

node * addAtLast(node *head, int d){
	node *ptr,*temp;
	ptr = head;
	
	temp = (node *)malloc(sizeof(node));
	temp->data = d;
	temp->next = NULL;
	
	if(head == NULL){	
		head = temp;
	}
	else{
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	
	return(head);
}

/* ADJECENCY LIST FUNCTIONS END */

/* BFS */

void bfs(int vertex, node *p[], int visited[], int Q[]){
	
	node *temp;
	
	
	printf("%d ",vertex);
	visited[vertex] = 1;
	
	qInsert(Q, v, vertex);
	
	while(front != -1){
		vertex = qDelete(Q, v);
		
		for(temp = p[vertex] ; temp ; temp = temp->next){
			if(!visited[temp->data]){
				printf("%d ",temp->data);
				qInsert(Q, v, temp->data);
				visited[temp->data] = 1;
			}
		}
	}
}

main(){
	/* Create List */
	int i,j,tempV;

	printf("Adjeacency Matrix\n\nEnter the num of Vertices : ");
	scanf("%d",&v);
	
	node *p[v];
	int visited[v];
	
	for(i=0;i<v;i++){
		p[i] = NULL;
		visited[i] = 0;
	}
	
	for(i=0;i<v;i++){
		printf("Which vertices are adjacent to vertex %d ?\nPress 999 to stop\n",i);
		scanf("%d",&tempV);
		while(tempV != 999){
			p[i] = addAtLast(p[i],tempV);
			scanf("%d",&tempV);
		}
	}
	
	int Q[v];
	
	int k;
	for(k=0; k < v ; k++){
		printf("\nBFS : ");
		bfs(k,p,visited,Q);
		printf("\n");
		
		for(i=0;i<v;i++){
			visited[i] = 0;
		}
	}
}
