#include<stdio.h>

typedef struct st
{
	float w,v;
	float ratio;
	int index;
} node;

void merge(node A[], int p, int q, int r){
	
	int n1 = q-p+1;
	int n2 = r-q;
	node L[n1],R[n2];
	int i,j,k;
	
	for(i=0 ; i<n1 ; i++){
		L[i] = A[i+p];
	}
	
	for(j=0 ; j<n2 ; j++){
		R[j] = A[q+j+1];
	}
	
	i=0;j=0;k=p;
	
	while(i!=n1 && j!=n2){
		if(L[i].ratio < R[j].ratio){
			A[k] = R[j];
			k++;
			j++;
		}
		else{
			A[k] = L[i];
			k++;
			i++;
		}
	}
	
	while(i!=n1){
		A[k] = L[i];
		k++;
		i++;
	}
	
	while(j!=n2){
		A[k] = R[j];
		k++;
		j++;
	}
}

void mergeSort(node a[], int p, int r){
	int q = (p+r)/2;
	if(p<r){
		mergeSort(a,p,q);
		mergeSort(a,q+1,r);
		merge(a,p,q,r);
	}
}

int main()
{
	int n,i,total,tmp;
	float max=0;
	printf("Enter n: ");
	scanf("%d",&n);
	node a[n];
	float ans[n];
	printf("Enter total Weight: ");
	scanf("%d",&total);
	for(i=0;i<n;i++)
	{
		printf("Enter weight and value: ");
		scanf("%f%f",&a[i].w,&a[i].v);
		a[i].ratio=a[i].v/a[i].w;
		a[i].index=i;
	} 
	mergeSort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		if(a[i].w>total)
		{
			ans[a[i].index]=(total/a[i].w);
			max=max+ans[a[i].index]*a[i].v;
			break;
		}
		else
		{
			ans[a[i].index]=1;
			max=max+a[i].v;
			total=total-a[i].w;	
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%f ",ans[i]);
	}
	printf("\nMax Value: %f",max);
	return 0;	
}
