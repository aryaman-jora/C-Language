#include<stdio.h>
main()
{
	int a,i;
	printf("enter a no\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		printf("%d\n",i);
}
return 0;
}

