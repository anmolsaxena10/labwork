#include<stdio.h>

#define INF 9999
#define UNDEF -1

typedef struct s{
	int source,dest;
	int weight;
} edge;

typedef struct s1{
	int vertex;
	int dist;
	int prev; 
} node;

void bottomUpMinHeap(node H[], int n){
	int i,j,k,heap;
	node v;
	for(i=(n-1)/2 ; i>=0 ; i--){
		k=i;
		v = H[i];
		
		heap = 0;
		while(!heap && (2*k)<=n){
			j = 2*k;
			if(j<n){
				if(H[j].dist > H[j+1].dist){
					j++;
				}
			}
			if(v.dist > H[j].dist){
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


int main(){
	int nNodes,nEdges,i,source;
	
	printf("Enter number of nodes: ");
	scanf("%d",&nNodes);
	printf("Enter total number of edges: ");
	scanf("%d",&nEdges);
	printf("Enter source edge: ");
	scanf("%d",&source);
	
	edge graph[nEdges];
	
	for(i=0 ; i<nEdges ; i++){
		printf("Enter source destination and weight of edge: ");
		scanf("%d %d %d",&graph[i].source,&graph[i].dest,&graph[i].weight);
		
	}
	
	node vertex[nNodes];
	
	for(i=0 ; i<nNodes ; i++){
		vertex[i].vertex = i;
		vertex[i].dist = INF;
		vertex[i].prev = UNDEF;
	}
	
	vertex[source].dist = 0;
	
	bottomUpMinHeap(vertex, nNodes);
	
	/*for(i=0 ; i<nNodes ; i++){
		printf("%d %d %d\n",vertex[i].vertex,vertex[i].dist,vertex[i].prev);
	}*/
	
	
	int last = nNodes-1, j,k;
	for(i=0 ; i<nNodes ; i++){
		node u = vertex[0];
		
		node t = vertex[0];
		vertex[0] = vertex[last];
		vertex[last] = t;
		last--;
		bottomUpMinHeap(vertex, last);
		
		for(j=0 ; j<nEdges ; j++){
			edge uv = graph[j];
			if(uv.source == u.vertex){
				for(k=0 ; k<nNodes ; k++){
					if(vertex[k].vertex == uv.dest){
						break;
					}
				}
				int alt = u.dist + uv.weight;
				if(alt < vertex[k].dist){
					vertex[k].dist = alt;
					vertex[k].prev = u.vertex;
				}
			}
		}
	}
	
	printf("\nVertex\tDist\tParent in Tree\n");
	for(i=0 ; i<nNodes ; i++){
		printf("%d\t%d\t%d\n",vertex[i].vertex,vertex[i].dist,vertex[i].prev);
	}
}
