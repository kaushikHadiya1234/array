#include<stdio.h>
main()
{
	int i,j,n,a[100],min,mxi;
	
	printf("enter the size of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	mxi=a[0];
	for(i=0;i<n;i++)
	{`
		if(a[i]>mxi)
		{
			printf("mximum number is = %d",a[i]);
	    }
	    
 }
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			printf("minimum number is = %d",a[i]);
		}
		
	}

}
