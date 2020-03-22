#include<stdio.h>
#include <stdlib.h>
typedef struct list
{
	int data;
	struct list *next;
}Clist;
main()
{
	Clist *start=NULL;
	int num,choice;

	Clist *create(Clist *start);
	void display(Clist *start);
	int count(Clist *start);
	void search(Clist *start,int num);
	
	do
	{
		printf("\n1.create\n2.display\n3.count\n4.search");
		printf("choice::");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:start=create(start);
			       break;
			case 2:display(start);
			       break;
			case 3:printf("no of nodes %d",count(start));
			       break;
			case 4:printf("enter the no");
					scanf("%d",&num);
					search(start,num);
			        break;	   	          
			default :exit(-1);
		}
	}while(1);
}
Clist *create(Clist *start)
{
	char ans;
	Clist *node,*last;
	do
	{
		node=(Clist*)malloc(sizeof(Clist));
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
void display(Clist*start)
{
	
	if(start==NULL)
	{
		printf("empty ll");
		return;
	}
	Clist*node=start;
	printf("\nLinked list is :");
	do
	{
		printf("%d\t",node->data);
		node=node->next;
    }while(node!=start);
}
int count(Clist *start)
{
	Clist*node=start;
	if(start==NULL)
	{
		printf("empty linkded list\n");
		return 0;
	}
	int c=0;
	do
	{
		c++;
		node=node->next;
		
	}while(node!=start);
	return c;
}
void search(Clist *start,int num)
{
	Clist*node=start;
	if(start==NULL)
	{
		printf("empty lisnked list");
		return ;
	}
	while(node!=NULL)
	{
		if(node->data==num)
		{
			printf("found\n");
			return ;
		}
		    node=node->next;
	}
	printf("Not found\n");
	
}
