#include<stdio.h>
main()
{
	int i,n,a[100];
	
	printf("enter the size of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	printf("\n=============reverse order===============\n");
	
	for(i=n-1;i>=0;i--)
	{
	    
	   	printf("%d\n",a[i]);
		
	}
}
