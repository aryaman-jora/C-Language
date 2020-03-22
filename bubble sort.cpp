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
	for(i=1;i<=n;i++)
	{
		for(j=n;j<=i+1;j--)
		{
			if (a[j]>a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
