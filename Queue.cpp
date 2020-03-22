#include<stdio.h>
#include<stdlib.h>
#define n 5
main()
{
	int a[n],i,rear=-1,choice,front=-1,num;
	int enqueue(int a[],int num,int *rear,int *front);
	int dequeue(int a[],int *front,int *rear);

    do
	{
		printf("\n1.enqueue\n2.dequeue\n3exit");
		printf("\nchoice::");
		scanf("%d",&choice);
		
		switch(choice)
		{
		case 1: printf("enter the no\n");
			        scanf("%d",&num);
			        
			        enqueue(a,num,&rear,&front);
			        break;
		case 2:dequeue(a,&front,&rear);
			        break;
		case 3:exit(-1);
			default:printf("invalid choice");		        
		}
	}while(1);
	return 0;
}
int enqueue(int a[],int num,int *rear,int *front)
{
	if(*front==0 && *rear==n-1 || *rear==*front-1)
	{
		printf("overflow");
		return 0;
	}
	
	if(*rear==n-1)
	   *rear=0;
	else
		*rear=*rear+1;
		
	a[*rear]=num;
	if (*front==-1)
			*front=0;
	}

int dequeue(int a[],int *front,int *rear)
{
	if(*front==-1)
		printf("underflow");
	else
	{
		printf("the deleted element is %d",a[*front]);
	
		if(*front==*rear)
			*front=*rear=-1;
    	else
			if(*front==n-1)
				*front=0;
			else
				*front=*front+1;
	}
    return 0;
}

