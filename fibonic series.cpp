#include<stdio.h>
main()
{
int a=0, b=1,c,i;
printf("%d\n%d\n",a,b);
for(i=1;i<=8;i++)
    {
	c=a+b;
	printf("%d\n",c);
	a=b;
	b=c;
	}	
}
