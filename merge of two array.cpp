#include<stdio.h>
main()
{
	char a[5],b[5],c[10];
	int i;
	printf("enter first array\n");
	scanf("%s",a);
	printf("enter second array\n");
	scanf("%s",b);
	for(i=0;i<=5;i++)
	{
		c[i]=a[i];
    }
	for(i=6;i<=10;i++)
	{
	
		c[i]=b[i];
    }
	printf("the third array is %s",c);
}

