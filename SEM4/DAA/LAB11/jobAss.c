#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 4

int a[M+1][N+1],ub=0;

typedef struct node
{
    int fix;
    int data;
    int c[N+1];
    int r[N+1];
    struct node *next;
}node;

node *head=NULL;

void insert(int data, int fix, int c[],int r[]) 
{
    node *ptr=(node *)malloc(sizeof(node));
    ptr->data=data;
    ptr->fix=fix;
    
    int i;
    for(i=0 ; i<=N ; i++){
    	ptr->c[i] = c[i];
    	ptr->r[i]=	r[i];
		
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
		if(ptr->r[i])
			continue;
		int tmin=1000;
		for(j=1 ; j<=N ; j++){
			if(ptr->c[j])
				continue;
			if(a[i][j] < tmin)
				tmin = a[i][j];
		}
		lb += tmin;
	}
	ptr->data = ptr->fix+lb;
}

void bound(){
	int i,j;
	while(1){
		for(i=1 ; i<=N ; i++){
			node *temp = (node *)malloc(sizeof(node));
			temp->data = head->data;
			if((temp->data)>ub)
			{
				printf("\n Minimum Time Required is %d\n",ub);
				exit(0);
			}
			temp->fix = head->fix;
			for(j=0 ; j<=N ; j++){
				temp->c[j] = head->c[j];
				temp->r[j]= head->r[j];
			}
			if(temp->c[i]!=1){
				int count=0;
				for(j=1 ; j<=N ; j++){
					if(temp->r[j])
						count++;
				}
				count++;
				temp->c[i] = 1;
				temp->r[count] = 1;
				temp->fix = temp->fix + a[count][i];
				temp->data = temp->fix;
				lowerBound(temp);
				if(count==N-1){
					if(temp->data<ub)
					ub = temp->data;
				}
				else if((temp->data) <= ub){
					insert(temp->data, temp->fix, temp->c,temp->r);
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

        int tempC[] = {0,0,0,0,0};
		int tempR[] = {0,0,0,0,0};        
        insert(0, 0, tempC,tempR);
	bound();
}

