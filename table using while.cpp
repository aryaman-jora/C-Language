#include<stdio.h>
main()
{
	int a,i;
	printf("enter a no\n");
	scanf("%d",&a);
	i=0;
	while(i<=10)
	{
		printf("the table is %d\n",a*i);
		i++;
	}
}
