#include<stdio.h>
#define n 5
main()
{
	int a[n][n],b[n][n];
	void adjecentmatrix(int a[n][n]);
	void Dia_adjecentmatrix(int a[n][n]);
	void display(int a[n][n]);
	
	adjecentmatrix(a);
	display(a);
	
	Dia_adjecentmatrix(b);
	display(b);
}

void adjecentmatrix(int a[][n])
{
	int i,j;
	char ans;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(i==j)
				a[i][j]=0;
			else
			{
				printf("edge b\\w V%d to V%d",i+1,j+1);
				scanf(" %c",&ans);
				if(ans=='y')
				{
					a[i][j]=1;
					a[j][i]=1;
				}
				else
				{
					a[i][j]=0;
					a[j][i]=0;
				}
			}
			
		}
	}
}

void Dia_adjecentmatrix(int a[][n])
{
	int i,j;
	char ans;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				a[i][j]=0;
			else
			{
				printf("edge b\\w V%d to V%d",i+1,j+1);
				scanf(" %c",&ans);
				if(ans=='y')
					a[i][j]=1;
				else
					a[i][j]=0;
			}
			
		}
	}
}


void display(int a[n][n])
{
	int i,j;
	
		printf("the matrix is\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
			printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
}
