#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,n,sum=0;
	
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
	
	printf("\n===========anwer==========\n");
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    sum+=a[j][i];
		}
		 printf("sum is = %d \n",sum);
		printf("\n");
		sum=0;
	}
	

}
