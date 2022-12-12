#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,n;
	
	printf("enter the size of array := ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		
		scanf("%d",&a[i][j]);
	    }
	}
	
	printf("\n===========answer==========\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
