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
	node *root = addNode(10);
	root->lptr = addNode(9);
	root->rptr = addNode(11);
	root->lptr->lptr = addNode(7);
	root->lptr->rptr = addNode(12);
	root->rptr->rptr = addNode(13);
	
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
