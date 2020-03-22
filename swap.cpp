//swap with temp
#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter two no\n");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("the no after swap are%d%d\n",a,b);
	return 0;
}
//swap without temp
main()
{
	int a,b;
	printf("enter two no\n");
	scanf("%d%d",&a&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value on sawp is %d %d",a,b);
	return 0
}
