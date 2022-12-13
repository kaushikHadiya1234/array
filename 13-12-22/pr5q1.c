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
	
	printf("\n=============nagetive number===============\n");
	
	for(i=0;i<n;i++)
	{
	    if(a[i]<0)
	    {
	    	printf("%d\n",a[i]);
		}
	}
}
