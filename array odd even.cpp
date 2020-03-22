#include<stdio.h>
main()
{
	int arr[5],i;
	printf("enter a array\n");
	for(i=0;i<=5;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0;i<=5;i++)
	{
		if(arr[i]%2==0)
		printf("even\n");
		else
		printf("odd\n");
	}
}
