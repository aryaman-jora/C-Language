#include<stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("enter the elements in 1st array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("enter the element in 2nd array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
	    }
   }
for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			printf("%d",c[i][j]);
			printf(" ");
		}
	printf("\n");
	}
}
