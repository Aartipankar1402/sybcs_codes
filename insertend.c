#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	};
struct node*create(struct node*list)
{
	int i,n;
	struct node *newnode,*temp;
	printf("enter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
 	{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n enter value:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(list==NULL)	
		{
	list=newnode;
	temp=newnode;
	}
	else
	{
		temp->next=newnode;
		temp=newnode;
	
	}
}
 return list;
}
void display(struct node *list )
{
	struct node *temp;
	for(temp=list;temp!=NULL;temp=temp->next)
	{
	printf("%d\t",temp->data);
 	}
}
struct node *insertend(struct node*list,int num)
{
		struct node *newnode,*temp;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=num;
		newnode->next=NULL;
		for(temp=list;temp->next!=NULL;temp=temp->next);
		
		temp->next=newnode;
		return list;
}

int main()
{
	int ch,num;
	struct node*list=NULL;
	do
	{
	printf("\n 1-create \n 2-display \n insertend");
	printf("\n enter choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:list=create(NULL);
    break;
	case 2:display(list);
	break;
	case 3:printf("enter value");
		scanf("%d",&num);
		list=insertend(list,num);
			break;
	}

}while(ch<4);
}

