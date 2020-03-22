#include<stdio.h>
main()
{
	int a,b,i;
	printf("enter a no\n");
	scanf("%d",&a);
	for(i=0;i<=10;i++)
	{
	b=a*i;
	printf("table of a is %d\n",b);
    }
}
