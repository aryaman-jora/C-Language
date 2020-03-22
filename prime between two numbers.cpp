#include<stdio.h>
main()
{
	int a,b,j;
	printf("enter two no");
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		for(j=2;j<i;j++)
		if(i%j==0)
		{
			printf("%d is non prime\n",i);
			break;
		}
		if(j==i)
		printf("%d is prime\n",i);
	}
return 0;
}
