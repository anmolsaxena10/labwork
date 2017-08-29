#include<stdio.h>
#include<stdlib.h>

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

void view(node *head){
	node *ptr;
	ptr = head;
	
	if(head == NULL){
		printf(" ");
		return;
	}
	
	while(ptr->next != NULL){
		printf("%d --> ",ptr->data);
		ptr = ptr->next;
	}
	printf("%d --> ",ptr->data);
}

main(){
	int v,i,j,tempV;

	printf("Adjeacency Matrix\n\nEnter the num of Vertices : ");
	scanf("%d",&v);
	
	int adjMatrix[v][v];
	
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			adjMatrix[i][j] = 0; 
		}
	}
	
	for(i=0;i<v;i++){
		printf("Which vertices are adjacent to vertex %d ?\nPress 999 to stop\n",i);
		scanf("%d",&tempV);
		while(tempV != 999){
			adjMatrix[i][tempV] = 1;
			scanf("%d",&tempV);
		}
	}
	
	node *p[v];
	
	for(i=0;i<v;i++){
		p[i] = NULL;
	}
	
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			if(adjMatrix[i][j] == 1){
				p[i] = addAtLast(p[i],j);
			}
		}
	}
	
	for(i=0;i<v;i++){
		printf("%d ",i);
		view(p[i]);
		printf("NULL\n");
	}
	
}
