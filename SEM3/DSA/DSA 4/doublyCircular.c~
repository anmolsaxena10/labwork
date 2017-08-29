#include<stdio.h>
#include<stdlib.h>

typedef struct doublyCircular {
	int data;
	struct doublyCircular *next;
	struct doublyCircular *prev;
} node;

node *end=NULL;

void view(){
	node *temp1 = end->next;
	printf("Forward : ");
	while(temp1 != end){
		printf("%d<-->",temp1->data);
		temp1 = temp1->next;
	}
	printf("%d",temp1->data);
	printf("\n");
	
	node *temp2 = end;
	printf("Backward : ");
	while(temp2 != end->next){
		printf("%d<-->",temp2->data);
		temp2 = temp2->prev;
	}
	printf("%d",temp2->data);
	printf("\n");
}

void insertAtBegining(int data){
	node *p = (node *)malloc(sizeof(node));
	node *temp = end;
	
	p->data = data;
	if(end == NULL){
		end = p;
		end->next = p;
		end->prev = p;
	}
	else{
		p->next = end->next;
		end->next->prev = p;
		end->next = p;
		p->prev = end;
	}
	printf("Node added successfully \n");
}

void insertAtEnd(int data){
	node *p = (node *)malloc(sizeof(node));
	node *temp = end;
	
	p->data = data;
	if(end == NULL){
		end = p;
		end->next = p;
		end->prev = p;
	}
	else{
		p->next = end->next;
		end->next->prev = p;
		end->next = p;
		p->prev = end;
		end = p;
	}
	printf("Node added successfully \n");
}

void deleteAt(int n){
	node *temp = end;
	int i;
	
	if(temp==NULL || n<1){
		printf("No node to delete!!!");
		return;
	}
	
	for(i=1;i<=n;i++){
		if(temp->next == end && i!=n){
			printf("Invalid value of n!!! ");
			return;
		}
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	if(temp == end){
		end = temp->next;
	}
	free(temp);
	
	printf("Deleted Successfully\n");
}

main(){
	int choice,data,n;
	char c;
	system("clear");
	while(1){
		printf("\tMENU\n1)Insert at begining\n2)Insert at end\n3)Delete\n4)View\n5)Exit\n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				printf("Enter data : ");
				scanf("%d",&data);
				insertAtBegining(data);
				break;
			case 2:
				printf("Enter data : ");
				scanf("%d",&data);
				insertAtEnd(data);
				break;
			case 3:
				printf("Which node you want to delete : ");
				scanf("%d",&n);
				deleteAt(n);
				break;
			case 4:
				view();
				break;
			case 5:
				exit(0);
				break;
			default :
				printf("Invalid Input!!!\n");
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
