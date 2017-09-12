#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
	struct tree *lptr;
	int data;
	struct tree *rptr;
} node;

node * addNode(int data){
	node *p = (node *)malloc(sizeof(node));
	p->data = data;
	p->lptr = NULL;
	p->rptr = NULL;
	
	return(p);
}

node * insert(node * node1, int data){
	
	if(node1 == NULL){
		return(addNode(data));
	}
	
	if(data < node1->data){
		node1->lptr = insert(node1->lptr,data);
	}
	else if(data > node1->data){
		node1->rptr = insert(node1->rptr,data);
	}
	
	return(node1);
}

void inorder(node *root){
	if(root == NULL){
		return;
	}
	
	inorder(root->lptr);
	printf("%d ",root->data);
	inorder(root->rptr);
}

void preorder(node *root){
	if(root == NULL){
		return;
	}
	
	printf("%d ",root->data);
	preorder(root->lptr);
	preorder(root->rptr);
}

void postorder(node *root){
	if(root == NULL){
		return;
	}
	
	postorder(root->lptr);
	postorder(root->rptr);
	printf("%d ",root->data);
}

main(){
	node *root=NULL;
	root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
	
	printf("Inorder traversal : ");
	inorder(root);
	printf("\n");
	
	printf("Preorder traversal : ");
	preorder(root);
	printf("\n");
	
	printf("Postrder traversal : ");
	postorder(root);
	printf("\n");
	
}
