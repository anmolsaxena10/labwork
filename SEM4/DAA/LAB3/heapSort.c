#include<stdio.h>

void bottomUpMaxHeap(int H[], int n){
	int i,j,k,v,heap;
	
	for(i=(n-1)/2 ; i>=0 ; i--){
		k=i;
		v = H[i];
		
		heap = 0;
		while(!heap && (2*k)<=n){
			j = 2*k;
			if(j<n){
				if(H[j] < H[j+1]){
					j++;
				}
			}
			if(v < H[j]){
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

void heapSort(int A[], int n){
	int i,last=n-1;
	for(i=0 ; i<n ; i++){
		printf("%d ",A[0]);
		
		int t = A[0];
		A[0] = A[last];
		A[last] = t;
		
		last--;
		
		bottomUpMaxHeap(A,last+1);
		
	}
}

main(){
	int A[] = {2,9,7,6,5,8,1};
	int i;
	for(i=0 ; i<7 ; i++ ){
		printf("%d ",A[i]);
	}
	printf("\n");
	
	bottomUpMaxHeap(A,7);
	
	for(i=0 ; i<7 ; i++ ){
		printf("%d ",A[i]);
	}
	printf("\n");
	
	heapSort(A,7);
	printf("\n");
}
