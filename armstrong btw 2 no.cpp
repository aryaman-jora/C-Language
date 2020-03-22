#include<stdio.h>
#include<math.h>
main()
{
	int i,a,b,n,r,c,temp,sum=0;
	printf("enter two no\n");
	scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
	temp=i;
for( ;i>0;i=i/10)
	{
		c++;
	}
	i=temp;
for( ;i>0;i=i/10)
    {
	   r=i%10;
    
    sum=sum+pow(r,c);
    }
	
    if(sum==temp)
	
	printf("armstrong");
	
	else
	   printf("not armstrong");
	
}

