#include<stdio.h>
main()
{
	int a,reminder,temp,reverse=0;
	printf("enter a no\n");
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
	reminder=a%10;
	reverse=reverse*10+reminder;
	a=a/10;
	}
	printf("%d\n",reverse);
    if(temp-reverse==0)
    printf("palandrom");
    else
    printf("not palandrom");
}

