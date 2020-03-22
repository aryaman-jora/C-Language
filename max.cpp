#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value of a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("a max");
		else
		printf("c max");
	}
	else 
	{
		if(b>c)
		printf("b max");
		else
		printf("c max");
	}
}
