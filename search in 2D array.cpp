#include<stdio.h>
main()
{
	int a[2][2],i,j,num;
	void lsearch(int a[2][2],int num);
	printf("enter the elements in array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
    printf("enter the number\n");
    scanf("%d",&num);
    
	lsearch(a,num);
}
	void lsearch(int a[2][2],int num )
	{
		int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a[i][j]==num)
			{
			printf("found");
			return;
		    }
		}
    }
    printf("not found\n");
}
