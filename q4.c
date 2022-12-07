                          //arrey

#include<stdio.h>
main()
{
	int a[100],b[100],c[100];
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
		scanf("%d",&b[i]);
	}
	printf("\n======================\n");
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++)
	printf("sum = %d\n ",c[i]);
   
	
	
}
