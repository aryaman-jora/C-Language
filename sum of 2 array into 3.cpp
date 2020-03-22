#include<stdio.h>
main()
{
	int a[4];
	int b[4];
	int c[4],i;
	printf("enter first array\n");
	    for(i=0;i<4;i++)
		{
		scanf("%d",&a[i]);
	    }
	printf("enter second array\n");
		for(i=0;i<4;i++)
		{
		scanf("%d",&b[i]);
        }
	for(i=0;i<4;i++)
	{
	
	c[i]=a[i]+b[i];
	
		printf("the 3 array is %d\n",c[i]);
	}
}
