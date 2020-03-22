#include<stdio.h>
#include <stdlib.h>
typedef struct list
{
	int data;
	struct list *next;
}Slist;
main()
{
	Slist *start=NULL;
    int num;
	char choice;
	 int pos;

	Slist *create(Slist *start);
	Slist *insert(Slist *start);
	Slist *del(Slist *start);
	void display(Slist *start);
	
	do
	{
		printf("\n1.create\n2.insert\n3.delete\n4.display");
		printf("choice::");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:start=create(start);
			       break;
			case 2:insert(start);
			       break;
			case 3:delete(start);
					break;			   	          
			case 5:display(start);
					break;
			default :exit(-1);
		}
	}while(1);
}
	
Slist *create(Slist *start)
{
	char ans;
	Slist *node,*last;
	do
	{
		node=(Slist*)malloc(sizeof(Slist));
		if (node==NULL)
		{
			printf("overflow");
			exit(-1);
		}//memory allocation(full memory)
		printf("enter a no");
		scanf("%d",&node->data);
		node->next=NULL;
		//created node
		if(start==NULL)
			start=node;
		else
			last->next=node;
		
		last=node;
		last->next=start;
		
		printf("enter a choice");
		scanf(" %c",&ans);
	}while(ans=='y');
return start;
}
void display(Slist *start)
{
	Slist *ptr;
	ptr=start;
	if(ptr==NULL)
	{
		printf("empty ll");
		return;
	}
	else
	printf("\nLinked list is :");
	do
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
    }while(ptr!=start);
}

Slist *insert(Slist *start)
{
	int pos;
	Slist*node,*ptr;
	
	printf("enter pos");
	scanf("%d",&pos);
	node=(Slist*)malloc(sizeof(Slist));
	printf("enter data");
	scanf("%d",&node->data);
	node->next=NULL;
	
	if(pos==1)
	{
		node->next=start;
		start=node;
	}
	else
	{
		int i=1;
		ptr=start;
		while(i<pos-1)
		{
			ptr=ptr->next;
			i++;
		}
		node->next=ptr->next;
		ptr->next=node;
	}
	return(start);
}
Slist *del(Slist *start)
{
	if(start==NULL)
	{
		printf("empty linked list\n");
	}
	else
	{
	int pos;
	Slist *ptr,*prev;
	printf("enter position");
	scanf("%d",&pos);
	
	if(pos==1)
	{
		ptr=start;
		start=start->next;
		free(ptr);
	}
	else
	{
		int i=1;
		ptr=start;prev=start;
		while(i<pos)
		{
			prev=ptr;
			ptr=ptr->next;
			i++;
		}
		prev->next=ptr->next;
		free(ptr);
	}
	}
return (start);
}
