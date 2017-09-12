#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
	struct tree *lptr;
	int data;
	struct tree *rptr;
} node;

node *root;
int totalNodes;

node * addNode(int data){
	node *p = (node *)malloc(sizeof(node));
	p->data = data;
	p->lptr = NULL;
	p->rptr = NULL;
	
	return(p);
}

void createTree(node *current, int in[], int inRootOccur, int pre[], int preRootOccur){
	
	if(inRootOccur == 0)
	{
		return()
	}
}

main(){
	printf("Enter num of nodes : ");
	scanf("%d",&totalNodes);
	
	int i,in[totalNodes],pre[totalNodes];
	
	printf("Enter inorder traversal : \n");
	for(i=0;i<totalNodes;i++){
		scanf("%d",in[i]);
	}
	printff("Enter preorder traversal : \n");
	for(i=0;i<totalNodes;i++){
		scanf("%d",pre[i]);
	}
	
	root = addNode(pre[0]);
	
	for(i=0 ; i<totalNodes ; i++){
		if(pre[0] == in[i]){
			break;
		}
	}
	
	createTree(root, in, i, totalNodes, pre, 0);
}
