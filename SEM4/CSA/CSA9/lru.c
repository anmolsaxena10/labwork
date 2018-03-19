#include<stdio.h>

int main(){
	int pageFrame[3][2],n,i,j,hltCount=0;
	memset(pageFrame, 0, sizeof(pageFrame));
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++){
		int t,min=0,hlt=0;
		scanf("%d",&t);
		for(j=0 ; j<3 ; j++){
			if(t == pageFrame[j][0]){
				hltCount++;
				pageFrame[j][1] = i;
				hlt = 1;
				break;
			}
			else if(pageFrame[j][0]==0){
				pageFrame[j][0] = t;
				pageFrame[j][1] = i;
				hlt = 1;
				break;
			}
			if(pageFrame[j][1]<pageFrame[min][1]){
				min = j;
			}
		}
		if(!hlt){
			pageFrame[min][0] = t;
			pageFrame[min][1] = i;
		}
		for(j=0 ; j<3 ; j++){
			printf("%d ",pageFrame[j][0]);
		}
		printf("\n");
	}
	printf("%d", hltCount*100/n);
}
