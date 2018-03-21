#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *head=NULL;

void insert(int data)
{
    node *ptr=(node *)malloc(sizeof(node));
    ptr->data=data;
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
int main() {
	insert(4);
	print();
	printf("\n");
	insert(3);
	print();
	printf("\n");
	insert(2);
	print();
	printf("\n");
	insert(1);
	print();
	return 0;
}


