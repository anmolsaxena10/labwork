#include<stdio.h>

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
	
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			printf(" %d ",adjMatrix[i][j]);
		}
		printf("\n");
	}
}
