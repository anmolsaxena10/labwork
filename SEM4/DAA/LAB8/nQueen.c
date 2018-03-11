#include<stdio.h>

int place(int x[], int k, int i){
	int j;
	for(j=1 ; j<k ; j++){
		if((x[j]==i) || (x[j]-i == j-k) || (x[j]-i == k-j)){
			return(0);
		}
	}
	return(1);
}

void nQueen(int x[], int k, int n){
	int i;
	for(i=1 ; i<=n ; i++){
		if(place(x, k, i)){
			x[k] = i;
			if(k==n){
				int j;
				for(j=1 ; j<=n ; j++){
					printf("%d ",x[j]);
				}
				printf("\n");
			}
			else{
				nQueen(x, k+1, n);
			}
		}
	}
}

int main(){
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	int x[n+1];
	nQueen(x, 1, n);
}
