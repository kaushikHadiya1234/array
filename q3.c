                          //arrey

#include<stdio.h>
main()
{
	int a[100],sum=0,ave;
	int i,n;
	
	printf("enter the value of n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n======================\n");
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		
	}
	
	ave=sum/n;
	printf("average of array = %d",ave);
}
