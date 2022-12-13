#include<stdio.h>
main()
{
	int a[100][100],b[100][100],c[100][100];
	int i,j,n;
	
	printf("enter the size of array := ");
	scanf("%d",&n);
	printf("\n=============A=============\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		
		scanf("%d",&a[i][j]);
	    }
	}
	printf("\n=============B=============\n");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		
		scanf("%d",&b[i][j]);
	    }
	}
	
		printf("\n===========matrix1==========\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
		printf("\n===========matrix2==========\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	} 
	
		printf("\n===========answer==========\n");
        
        for(i=0;i<n;i++)
        {
        	for(j=0;j<n;j++)
        	{
			if(a[i][j]==b[i][j])
			{
				printf("equal");
				return 0;
			}
			else
			{
				printf("not equal");
				return 0;
			}
		    }
	    }

}
