#include<stdio.h>
#include <stdlib.h>
typedef struct list
{
	struct list *pre;
	int data;
	struct list *next;
}Dlist;
main()
{
	Dlist *start=NULL;
	int num,choice;

	Dlist *create(Dlist *start);
	/*Dlist *del(Dlist *start);
	Dlist *insert(Dlist *start);*/
	void display(Dlist *start);
	do
	{
		printf("\n1.create\n2.display");
		printf("choice::");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:start=create(start);
			       break;
			case 2:display(start);
			       break;	   	          
			/*case 3:del(start);
					break;
			case 4:insert(start);
					break;*/
			default :exit(-1);
		}
	}while(1);
}
Dlist *create(Dlist *start)
{
	char ans;
	Dlist *node,*last;
	do
	{
		node=(Dlist*)malloc(sizeof(Dlist));
		if (node==NULL)
		{
			printf("overflow");
			exit(-1);
		}//memory allocation(full memory)
		printf("enter a no");
		scanf("%d",&node->data);
		node->next=NULL;
		node->pre=NULL;
		//created node
		if(start==NULL)
		{
			start=node;
			last=node;
		}
		else
		{
			last->next=node;
			node->pre=last;
			last=last->next;
	    }
		printf("enter a choice");
		scanf(" %c",&ans);
	}while(ans=='y');
return start;
}
void display(Dlist*start)
{
	
	if(start==NULL)
	{
		printf("empty ll");
		return;
	}
	Dlist*node=start;
	printf("\nLinked list is :");
	do
	{
		printf("%d\t",node->data);
		node=node->next;
    }while(node!=start);
}
/*Dlist *insert(Dlist *start)
{
	int pos;
	Dlist *node,*prev,*last;
	node=(Dlist*)malloc(sizeof(Dlist));
	printf("enter the position");
	scanf("%d",&pos);
	printf("enter the data");
	scanf("%d",&node->data);
	node->next=NULL;
if(pos==1)
	{
	last=start;
	while(last->next=start)
	{
		last=last->next;
	}
	node->next=start;
	start=node;
	last->next=start;
    }
else
	{
		int i=1;
		Dlist *ptr;
		ptr=start;
		while(i<pos-1)
		{
			i++;
			ptr=ptr->next;	
		}
		node->next=ptr->next;
		ptr->next=node;	
	}
return (start);
}
Dlist *del(Dlist *start)
{
	int pos;
	Dlist *last,*ptr;
	printf("enter the position\n");
	scanf("%d",&pos);
	if(pos==1)
	{
		last=start;
		while(last->next!=start)
		{
			last->next=last;
		}
		ptr=start;
		start=start->next;
		last->next=start;
		free(ptr);
	}
	else
	{
		int i=1;
		Dlist *ptr,*prev;
		ptr=start;
		prev=start;
		while(i<pos)
		{
			prev=ptr;
			ptr->next=ptr;
			i++;
		}
		prev->next=ptr->next;
		free(ptr);
	}
return (start);
}*/
