#include<stdio.h>
main()
{
	int a[100];
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
		printf("%d\n",a[i]);
	}
	
	
}
