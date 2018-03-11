#include<stdio.h>

void nextValue(int n, int G[n+1][n+1], int x[], int k, int m){
	while(1){
		x[k] = (x[k]+1)%(m+1);
		if(x[k]==0){
			return;
		}
		int i;
		for(i=1 ; i<=n ; i++){
			if(G[k][i]!=0 && x[k]==x[i]){
				break;
			}
		}
		if(i==n+1){
			return;
		}
	}
}

void mColoring(int n, int G[n+1][n+1], int x[], int k, int m){
	while(1){
		nextValue(n, G, x, k, m);
		if(x[k]==0){
			return;
		}
		if(k==n){
			int i;
			for(i=1; i<=n ; i++){
				printf("%d ",x[i]);
			}
			printf("\n");
		}
		else{
			mColoring(n, G, x, k+1, m);
		}
	}
}

int main(){
	int n,m,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter m: ");
	scanf("%d",&m);
	int G[n+1][n+1], x[n+1];
	
	for(i=1 ; i<=n ; i++){
		x[i]=0;
		for(j=1 ; j<=n ; j++){
			scanf("%d",&G[i][j]);
		}
	}
	
	printf("\nSolutions\n");
	mColoring(n,G,x,1,m);
}
