#include<stdio.h>
main()
{
	int i,n,a[100],sum=0;
	
	printf("enter the size of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	printf("\n=============answer===============\n");
	
	for(i=0;i<n;i++)
	{
    	sum+=a[i];
	}
	printf("sum of array=%d",sum);
}
