#include<stdio.h>
main()
{
	int a,i,max=0;
	printf("enter 5 no\n");
	for(i=0;i<=5;i++)
	scanf("%d",&a);
	if(a>max)
	{
		max=a;
		printf("%d",max);
	}
}
