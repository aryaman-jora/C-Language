#include<stdio.h>
#include<stdlib.h>
#define n 5 
main()
{
	int a[n],n,i,num,top=-1,choice;
	int push(int a[],int top,int num);
	int pop(int a[],int top);
	do
	{
		printf("\n1.push\n2.pop\n3exit");
		printf("\nchoice::");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("enter the no\n");
			        scanf("%d",&num);
			        
			        top=push(a,num,top);
			        break;
			case 2:top=pop(a,top);
			        break;
			case 3:exit(-1);
			default:printf("invalid choice");		        
		}
	}while(1);
	return 0;
}
int push(int a[n],int top,int num)
{
	int n;
	top=-1;
	if(top==n-1)
	{
	printf("overflow\n");
	return ;	
	} 
    else
    top=top+1;
    a[top]=num;
    
	return top;
}
int pop(int a[n],int top)
{
	if(top==-1)
	{
		printf("underflow");
		return ;
	}
	else 
	{
	printf("the deleted element is %d",a[top]);
	top=top-1;
}
return top;
}
