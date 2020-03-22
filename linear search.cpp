#include<stdio.h>
#define n 5
main()
{
	int i,num,loc;
	int arr[n];
    printf("enter a array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
    printf("enter the no to be found\n");
	scanf("%d",&num);
	
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
		loc=i+1;
		printf("the no is at %d",loc);
		break;
		}
	}
	if(i==n)
		printf("not found\n");

}
