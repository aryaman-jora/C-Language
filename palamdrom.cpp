#include<stdio.h>
main()
{
	int a,temp,b=0,c;
	printf("enter a no \n");
	scanf("%d",&a);
	while(a!=0)
	temp=a;
	c=a%10;
	b=b*10+c;
	a=a/10;
	printf("%d",b);
if(temp-b==0) 

                                                   
else
{
	printf("the no is not plandrom\n");
}
}
