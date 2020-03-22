#include<stdio.h>
#include<stdlib.h>
typedef struct list 
{
	int data;
	struct list*next;
}slist;
main()
{
	slist *rear=NULL,*front=NULL,*node;
	int choice;
	void enqueue(slist**R,slist**F,slist*node);
	void dequeue(slist**F,slist**R);

    do
	{
		printf("\n1.enqueue\n2.dequeue\n3exit");
		printf("\nchoice::");
		scanf("%d",&choice);
		
		switch(choice)
		{
		case 1:			node=(struct list*)malloc(sizeof(struct list));
						printf("enter data\n");
			        	scanf("%d",&node->data);
			        	node->next=NULL;
			       		enqueue(&rear,&front,node);
			        	break;
		case 2:			dequeue(&front,&rear);
			        	break;
		case 3:			exit(-1);
		default:		printf("invalid choice");		        
		}
	}while(1);
	return 0;
}
void enqueue(slist**R,slist**F,slist*node)
{
	if(*R==NULL)
	{
		*R=*F=node;
		return;
	}
	(*R)->next=node;
	*R=node;
}

void dequeue(slist**F,slist**R)
{
	if(*F==NULL)
	{
		printf("underflow");
		return;
	}
	slist *node=*F;
	if(*F==*R)
	{
		*F=*R=NULL;
	}
	else
	{
		*F=(*F)->next;
	}
	printf("the deleted element is %d",node->data);
	free(node);
}
