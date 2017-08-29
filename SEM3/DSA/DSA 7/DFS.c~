#include<stdio.h>
#include<stdlib.h>

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

void dfs(int vertex,node *p[], int visited[]){
	node *temp;
	
	temp = p[vertex];
	printf("%d ",vertex);
	visited[vertex] = 1;
	
	while(temp != NULL){
		
		vertex = temp->data;
	
		if(!visited[vertex]){
			dfs(vertex,p,visited);
		}
		temp = temp->next;
	}
}



main(){
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
	
	printf("\nDFS : ");
	dfs(0,p,visited);
	printf("\n");
}
