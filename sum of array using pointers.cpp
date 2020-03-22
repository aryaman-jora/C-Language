#include<stdio.h>
main()
{
	int a[5],*p,i,sum=0;
	printf("enter a array\n");
	for(i=0;i<5;i++)
       {
		scanf("%d",&a[i]);
       }
    p=&a[0];
    for(i=1;i<=5;i++)
    {
    	sum=sum+*p;
    	p++;
	}
	printf("the sum is %d",sum);
}
