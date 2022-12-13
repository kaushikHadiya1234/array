#include<stdio.h>
main()
{
	int i,j,n,a[100],min,mxi=0;
	
	printf("enter the size of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>=mxi)
		{
		    mxi=a[i];
	    }
	    
		if(a[i]<=min)
		{
		    min=a[i];
		}
		
	}
	
		printf("mximum number is = %d\n",mxi);
		printf("minimum number is = %d",min);

}
