#include<stdio.h>
main()
{
	int a[2][2],i,j,b;
	printf("enter the array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    printf("enter the scalar\n");
    scanf("%d",&b);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			a[i][j]=b*a[i][j];
		
	
			printf("the new matrix is %d\n",a[i][j]);
	    }
   }

}
