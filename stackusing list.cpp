#include<stdio.h>
#include<stdlib.h> 
typedef struct list 
{
int data;
struct list *next;	
}slist;

main()
{
	int choice;
	slist* top=NULL,*node;
	
	slist *push(slist *top,slist*node);
	slist *pop(slist *top);
	do
	{
		printf("\n1.push\n2.pop\n3exit");
		printf("\nchoice::");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: node=(struct list*)malloc(sizeof(struct list));
					printf("enter the no\n");
			        scanf("%d",&node->data);
			        node->next=NULL;
			        
			        top=push(top,node);
			        break;
			case 2:top=pop(top);
			        break;
			case 3:exit(-1);
			default:printf("invalid choice");		        
		}
	}while(1);
	return 0;
}
slist *push(slist *top,slist*node)
{
	
	if(top==NULL)
	{
		//printf("empty stack");
		top=node;
	}
	else
	{
	
		node->next=top;
		top=node;
	}
	return top;
}

slist *pop(slist *top)
{
	slist *node;
	if(top==NULL)
	{
		printf("underflow");
		return top;
	}
	node=top;
	top=top->next;
	printf("the deleted element is %d",node->data);
	
	return top;
}
