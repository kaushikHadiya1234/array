                               // second largest number
                               
#include<stdio.h>
main()
{
	int i,j,n,a[100],mxi;
	
	printf("enter the size of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	mxi=a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>mxi)
		{
			printf("largest number is = %d",a[i]);
			return 0;
		}
	}
}                               
