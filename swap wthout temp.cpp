#include<stdio.h>
main()
{
	int a,b;
	printf("enter two no\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value on sawp is %d %d",a,b);
	return 0;
}
