#include<stdio.h>
#define n 5
main()
{
	int a[n],i,j,temp;
	void sort(int a[n]);
	printf("enter a array\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
    sort(a);
}	
	void sort(int a[n])
{
	int i,j,temp;
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
