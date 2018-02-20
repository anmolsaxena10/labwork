#include<stdio.h>

int main(){
	int w[5] = {-1, 2, 3, 4, 5};
	int v[5] = {-1, 5, 7, 10, 4};
	int capacity = 9,i,j;
	int sol[5][capacity+1];
	
	for(i=0 ; i<5 ; i++){
		sol[i][0] = 0;
	}
	for(i=0 ; i<=capacity ; i++){
		sol[0][i] = 0;
	}
	
	for(i=1 ; i<5 ; i++){
		for(j=1 ; j<=capacity ; j++){
			if(w[i]>j){
				sol[i][j] = sol[i-1][j];
			}
			else{
				if(sol[i-1][j] > sol[i-1][j-w[i]]+v[i]){
					sol[i][j] = sol[i-1][j];
				}
				else{
					sol[i][j] = sol[i-1][j-w[i]]+v[i];
				}
			}
		}
	}
	
	for(i=1 ; i<5 ; i++){
		for(j=1 ; j<=capacity ; j++){
			printf("%d ",sol[i][j]);
		}
		printf("\n");
	}
	
	int selected[5]={0};
	j=capacity;
	i=4;
	
	while(i>0){
		if(sol[i][j] != sol[i-1][j]){
			j-=w[i];
			selected[i]=1;
		}
		i--;
	}
	
	for(i=0 ; i<5 ; i++){
		printf("%d ",selected[i]);
	}
}
