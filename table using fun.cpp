#include<stdio.h>
main()
{
	int a,i;
	int table(int a,int i);
	printf("enter a no\n");
	scanf("%d",&a);
	table(a,i);
}
int table(int a,int i)
{
	int n;
	printf("the table is\n");
	for(i=1;i<10;i++)
	{
		n=a*i;
		printf("%d",n);
	}
}
