#include<stdio.h>
void swap(float a[],int i,int j)
{
	 float t=a[i];
	 a[i]=a[j];
	 a[j]=t;
}


int partition(float a[],int p,int r)
{
	 float pivot=a[p];
	 int i=p;
	 int j=r+1;
	 
	 do
	 {
	 	 do
	 	 {
	 	    i++;	 
		 }while(a[i]<=pivot);
		 
		 do
	 	 {
	 	    j--;	 
		 }while(a[j]>=pivot && j!=p  );
		 
		 if(i<j)
		 swap(a,i,j);
	 }while(i<j);
	 
	 
	 swap(a,p,j);
	 
	 return j;
}


void quick(float a[],int p,int r)
 {
 	 if(p<r)
 	  {
 	  	 int q=partition(a,p,r);
 	  	 quick(a,p,q-1);
 	  	 quick(a,q+1,r);
	   }
 }
 
void main()
{	
	int i,j,a[5]={23,465,12,43,2};
	int n,max,weight=0;
  	
  	printf("enter the total no:\n");
  	scanf("%d",&n);
  	
  	float v[n],w[n];
  	float ratio[n];
  	int index[n];
  	float x[n];
  	
  	printf("Enter the Values!\n");
  	for(i=0;i<n;i++)
  		scanf("%f",&v[i]);
  	
  	printf("Enter the weight!\n");
  	for(i=0;i<n;i++)
  		scanf("%f",&w[i]);
  	
  	for(i=0;i<n;i++)
  		ratio[i]=w[i]/v[i];
    	quick(ratio,0,4);
    	
    	for(i=0;i<n;i++){
    		j=0;
    		while(1){
    			if(ratio[i]==w[j]/v[j]){
    				index[i]=j;
    				break;
    			}	
    			else{
    				j++;
    			}
    		}
    	}
  	for(i=0;i<n;i++)
  		printf("\n%d\n",index[i]);     	
  	
  	printf("Enter the maximum weight\n");
  	scanf("%d",&max); 	  	          
     	
     	i=0;
     	
     	while(weight<=max){
     		printf("1\n");
		if((weight + w[index[i]])<=max){
			x[index[i]]=1;
			weight+=w[index[i]];
		}
		else{
			x[index[i]]=(max-weight)/w[index[i]];
		}
		i++;     		
     	}        
  	for(i=0;i<n;i++)
  		printf("%d",x[i]);     	
}
	

