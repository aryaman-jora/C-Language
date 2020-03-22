#include<stdio.h>
#define n 5
main()
{
	int i,num,loc;
	int arr[n];
	
	void Lsearch(int arr[],int num);
	
    printf("enter a array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
    printf("enter the no to be found\n");
	scanf("%d",&num);
	
	Lsearch(arr,num);
}

void Lsearch(int arr[],int num)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
		//loc=i+1;
		printf("the no is at %d",i+1);
		//break;
		return;
		}
	}
	//if(i==n)
		printf("not found\n");

}
