#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,n,sum1=0,sum2=0,sum;
	
	printf("enter the size of array := ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		
		scanf("%d",&a[i][j]);
	    }
	}
	printf("\n===========matrix==========\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n===========diagonal==========\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		   if(i==j)
		   {
		   		sum1+=a[i][j];
		   }
		   
		}
		printf("\n");
	}
		printf("diagonal sum of array = %d",sum1);
		sum=0;
		
			
	printf("\n===========anti-diagonal==========\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		   if(i+j==n-1)
		   {
		   		sum2+=a[i][j];
		   }
		   
		}
		printf("\n");
	}
		printf("anti-diagonal sum of array = %d\n",sum2);
	
		printf("\n===========cross-diagonal sum==========\n");
	
		sum=sum1+sum2;
		
		printf("cross-diagonal sum is = %d",sum);
		
}

