#include<stdio.h>
#define n 4


int x[n]={0};
int w[n]={2,3,4,5};
int m=7;

void sumSubset(int s, int k, int r){
	x[k]=1;
	
	if(s+w[k]==m){
		int i=0;
		for(i=0 ; i<n ; i++){
			printf("%d ",x[i]);
			x[i]=0;
		}
		printf("\n");
	}
	else if(s+w[k]+w[k+1]<=m){
		sumSubset(s+w[k], k+1, r-w[k]);
	}
	
	if((s+r-w[k]>=m) && (s+w[k+1]<=m)){
		x[k]=0;
		sumSubset(s,k+1,r-w[k]);
	}
}


int main(){
	sumSubset(0,0,14);
	
}
