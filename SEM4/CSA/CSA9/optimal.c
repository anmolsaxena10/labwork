#include<stdio.h>

int main(){
	int pageFrame[3],i,j,n,hltCount=0;
	memset(pageFrame, 0, sizeof(pageFrame));
	
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0 ; i<n ; i++){
		int hlt=0;
		for(j=0 ; j<3 ; j++){
			if(a[i] == pageFrame[j]){
				hlt=1;
				hltCount++;
				break;
			}
		}
		if(!hlt){
			int space=0;
			for(j=0 ; j<3 ; j++){
				if(pageFrame[j]==0){
					space=1;
					break;
				}
			}
			if(space){
				pageFrame[j] = a[i];
			}
			else{
				int temp[3]={n+1, n+1, n+1};
				for(j=i+1 ; j<n ; j++){
					if(pageFrame[0]==a[j]){
						temp[0] = j;
						break;
					}
				}
				for(j=i+1 ; j<n ; j++){
					if(pageFrame[1]==a[j]){
						temp[1] = j;
						break;
					}
				}
				for(j=i+1 ; j<n ; j++){
					if(pageFrame[2]==a[j]){
						temp[2] = j;
						break;
					}
				}
				int max=0;
				for(j=0 ; j<3 ; j++){
					if(temp[j]>temp[max]){
						max=j;
					}
				}
				pageFrame[max] = a[i];
			}
		}
		for(j=0 ; j<3 ; j++){
			printf("%d ",pageFrame[j]);
		}
		printf("\n");	
	}
	printf("%d", hltCount*100/n);
}
