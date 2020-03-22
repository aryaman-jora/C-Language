#include<stdio.h>
main()
{
	char a[5],b[5],c[10];
	int i,j;
	printf("enter first array\n");
	scanf("%s",a);
	printf("enter second array\n");
	scanf("%s",b);
	for(i=0;i<=5;i++)
	{
	c[i]=a[i];
	}
	for(j=0;i<=5;j++)
	{
	c[i]=b[j];
	i++;
    }
    printf("%s",c);
}

