#include<stdio.h>
#include<math.h>
main()
{
	int a,b,D,c;
	int x,y;
	printf("enter the value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	D=b*b-4*a*c;
	x=(-b+sqrt(D))/(2*a);
	y=(-b-sqrt(D))/(2*a);
	printf("the first root is %d",x);
	printf("the second root is %d",y);
	return 0;
}
