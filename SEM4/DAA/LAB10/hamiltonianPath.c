#include<stdio.h>

void nextValue(int n, int G[n+1][n+1], int x[], int k){
	while(1){
		x[k] = (x[k]+1)%(n+1);
		if(x[k]==0){
			return;
		}
		if(G[x[k-1]][x[k]]!=0){
			int j;
			for(j=1 ; j<k ; j++){
				if(x[j]==x[k]){
					break;
				}
			}
			if(j==k){
				if((k<n) || ((k==n) && G[x[n]][x[1]]!=0)){
					return;
				}
			}
		}
	}
}

void hamiltonian(int n, int G[n+1][n+1], int x[], int k){
	while(1){
		nextValue(n, G, x, k);
		if(x[k]==0){
			return;
		}
		if(k==n){
			int i;
			for(i=1; i<=n ; i++){
				printf("%d ",x[i]);
			}
			printf("\n");
			break;
		}
		else{
			hamiltonian(n, G, x, k+1);
		}
	}
}

int main(){
	int n,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	int G[n+1][n+1], x[n+1];
	
	for(i=1 ; i<=n ; i++){
		x[i]=0;
		for(j=1 ; j<=n ; j++){
			scanf("%d",&G[i][j]);
		}
	}
	x[1]=1;
	printf("\nSolutions\n");
	hamiltonian(n,G,x,2);
}
