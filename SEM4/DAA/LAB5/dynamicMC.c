#include<stdio.h>

int main(){
	int nCoins,i,j,k,ammount=0;
	
	printf("Enter total types of coins: ");
	scanf("%d", &nCoins);
	int coins[nCoins+1];
	
	printf("Enter coin denominations: \n");
	for(i=1 ; i<=nCoins ; i++){
		scanf("%d", &coins[i]);
	}
	
	printf("Enter ammount to make: ");
	while(1){
		scanf("%d", &ammount);
		if(ammount>=coins[1]){
			break;
		}
		printf("Invalid Ammout!! Re enter ammount\n");
	}
	
	int sol[nCoins+1][ammount+1];
	
	for(i=0 ; i<=ammount ; i++){
		sol[0][i] = 0;
		sol[1][i] = i;
	}
	
	for(i=0 ; i<=nCoins ; i++){
		sol[i][0] = 0;
	}	
	
	for(i=2 ; i<=nCoins ; i++){
		for(j=1 ; j<=ammount ; j++){
			if(coins[i] > j){
				sol[i][j] = sol[i-1][j];
			}
			else{
				if((sol[i-1][j]<sol[i][j-coins[i]]+1) ){
					sol[i][j] = sol[i-1][j];
				}
				else{
					sol[i][j] = sol[i][j-coins[i]] + 1;
				}
			}
		}
	}
	
	printf("\n");
	for(i=1 ; i<=nCoins ; i++){
		for(j=1 ; j<=ammount ; j++){
			printf("%d ",sol[i][j]);
		}
		printf("\n");
	}
	
	int num = sol[nCoins][ammount];
	int solCoins[num];
	k=0;i=nCoins;j=ammount;
	
	while(k!=num){
		if(sol[i][j] == sol[i-1][j]){
			i--;
		}
		else{
			solCoins[k++] = coins[i];
			j-=coins[i];
		}
	}
	
	for(i=0 ; i<num ; i++){
		printf("%d ",solCoins[i]);
	}
	printf("\n");
}
