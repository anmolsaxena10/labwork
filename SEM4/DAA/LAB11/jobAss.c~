#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 4

int a[M+1][N+1],ub=0;

typedef struct node
{
    int fix;
    int data;
    int d[N+1];
    struct node *next;
}node;

node *head=NULL;

void insert(int data, int fix, int d[])
{
    node *ptr=(node *)malloc(sizeof(node));
    ptr->data=data;
    ptr->fix=fix;
    
    int i;
    for(i=0 ; i<=N ; i++){
    	ptr->d[i] = d[i];
    }
    
    if(head==NULL)
    {
        ptr->next=NULL;
        head=ptr;
    }
    else if(head->next==NULL)
    {
        if(data>head->data)
        {
            ptr->next=NULL;
            head->next=ptr;
        }
        else
        {
            ptr->next=head;
            head=ptr;
        }
    }
    else
    {
    	if(head->data>data)
    	{
    		ptr->next=head;
    		head=ptr;
    		return;
		}
        node *tmp=head;
        
        while(tmp->next!=NULL && tmp->next->data<data)
        {
            tmp=tmp->next;
        }
        
        ptr->next=tmp->next;
        tmp->next=ptr;
    }
}

void print()
{
    node *tmp=head;
    
    while(tmp!=NULL)
    {
        printf("%d ",tmp->data);
        tmp=tmp->next;
    }
}

void lowerBound(node *ptr){
	int lb=0,i,j;
	for(i=1 ; i<=M ; i++){
		if(ptr->d[i])
			continue;
		int tmin=1000;
		for(j=1 ; j<=N ; j++){
			if(ptr->d[j])
				continue;
			if(a[i][j] < tmin)
				tmin = a[i][j];
		}
		printf("%d ",tmin);
		lb += tmin;
	}
	printf("\n");
	ptr->data = ptr->fix+lb;
}

void bound(){
	int i,j;
	while(1){
		for(i=1 ; i<=N ; i++){
			node *temp = (node *)malloc(sizeof(node));
			temp->data = head->data;
			temp->fix = head->fix;
			for(j=0 ; j<=N ; j++){
				temp->d[i] = head->d[i];
			}
			if(temp->d[i]!=1){
				int count=0;
				for(j=0 ; j<=N ; j++){
					if(temp->d[i])
						count++;
				}
				count++;
				temp->d[i] = 1;
				temp->fix = temp->fix + a[count][i];
				temp->data = temp->fix;
				lowerBound(temp);
				
				if(count==N-1){
					ub = temp->data;
				}
				else if(temp->data <= ub){
					insert(temp->data, temp->fix, temp->d);
					printf("\n data-%d  fix-%d \n", temp->data, temp->fix);
					int k;
					for(k=1 ; k<=N ;k++ ){
						printf("%d ", temp->d[k]);
					}
					printf("\n");
				}
				else{
					printf("%d\n", ub);
					exit(0);
				}
			}
		}
		head = head->next;
	}
}

int main(){
        int i,j;
        printf("Enter the table\n");
        for (i=1 ; i<=M ; i++){
                for(j=1 ; j<=N ; j++){
                        scanf("%d",&a[i][j]);
		}
	}
        for(i=1 ; i<=M ; i++){
        	ub = ub + a[i][i];
        }
        int tempD[] = {0,0,0,0,0};
        insert(0, 0, tempD);
	bound();
}
