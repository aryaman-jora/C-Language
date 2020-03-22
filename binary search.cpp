#include<stdio.h>
#define n 5
main()
{
	int mid,arr[n],num,low,high,i;
	void BinarySearch(int arr[],int num);
    
	 low=0;
     high=4;
	printf("enter a array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the no\n");
	scanf("%d",&num);
	
	BinarySearch(arr,num);
	
}

void BinarySearch(int arr[],int num)
{
	int low=0,high=n-1,mid;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==num)
		{
			printf("it is found at %d",mid);
			return;
		}
		 
		 if(arr[mid]<num)
		     low=mid+1;
	    else
	        high=mid-1; 
	}
	 printf("not found");
	
}
	

