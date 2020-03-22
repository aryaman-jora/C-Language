#include<stdio.h>
main()
{
int i, a=1,factorial;
printf("enter a no\n");
scanf("%d",&a);
for(i=1;i<=a;i++)
	{
	factorial=factorial*i;
	}
printf("the factorial is %d\n",factorial);

}
