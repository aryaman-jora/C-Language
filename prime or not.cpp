#include<stdio.h>
main()
{
	int a,i;
	printf("enter the no\n");
	scanf("%d",&a);
	for(i=2;i<a-1;i++)
	{
	if(a%i==0)
    {
	printf("not prime\n");
	break;
    }
	else
	{
	printf("prime\n");
    break;
	}
}
}
