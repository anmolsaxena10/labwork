#include<stdio.h>

typedef struct s{
	int source,dest;
	int weight;
} edge;


void bottomUpMinHeap(edge H[], int n){
	int i,j,k,heap;
	edge v;
	for(i=(n-1)/2 ; i>=0 ; i--){
		k=i;
		v = H[i];
		
		heap = 0;
		while(!heap && (2*k)<=n){
			j = 2*k;
			if(j<n){
				if(H[j].weight > H[j+1].weight){
					j++;
				}
			}
			if(v.weight > H[j].weight){
				H[k] = H[j];
				k = j;
			}
			else{
				heap = 1;
			}
		}
		H[k] = v;
	}
}



void makeSet(int A[], int n){
	int i;
	for(i=0 ; i<n ; i++){
		A[i] = i;
	}
}

int findSet(int A[], int i){
	while(A[i] != i){
		i = A[i];
	}
	return i;
}

void setUnion(int A[], int a, int b){
	int rootA = findSet(A,a);
	int rootB = findSet(A,b);
	A[rootA] = rootB;
}

int main(){
	int nNodes,nEdges,i;
	
	printf("Enter number of nodes: ");
	scanf("%d",&nNodes);
	printf("Enter total number of edges: ");
	scanf("%d",&nEdges);
	
	int set[nNodes];
	edge graph[nEdges];
	
	for(i=0 ; i<nEdges ; i++){
		printf("Enter source destination and weight of edge: ");
		scanf("%d %d %d",&graph[i].source,&graph[i].dest,&graph[i].weight);
		
	}
	
	makeSet(set, nNodes);
	
	bottomUpMinHeap(graph, nEdges);
	
	/*for(i=0 ; i<nEdges ; i++){
		printf("%d-%d, %d\n",graph[i].source, graph[i].dest, graph[i].weight);
	}*/
	
	edge tree[nEdges];
	
	int j=0,last = nEdges-1;
	for(i=0 ; i<(nEdges) ;i++){
		edge temp = graph[0];
		
		edge t = graph[0];
		graph[0] = graph[last];
		graph[last] = t;
		last--;
		bottomUpMinHeap(graph,last);
		
		if(findSet(set, temp.source) != findSet(set, temp.dest)){
			setUnion(set, temp.source, temp.dest);
			tree[j++] = temp;
		}
	}
	
	int cost=0;
	printf("\nEdges in the Minimum Spanning Tree\n");
	for(i=0 ; i<j ; i++){
		printf("%d-%d, %d\n",tree[i].source, tree[i].dest, tree[i].weight);
		cost+=tree[i].weight;
	}
	printf("Cost: %d",cost);
	/*
	for(i=0 ; i<nNodes ; i++){
		printf("%d %d\n",i,set[i]);
	}*/
}
