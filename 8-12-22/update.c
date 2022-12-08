#include<stdio.h>
main()
{
    int a[100];
	int i,n,nv,ps;
	
	printf("enter the size of array:=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter the position:=");
	scanf("%d",&ps);
	
	printf("enter the new value:=");
	scanf("%d",&nv);
	a[ps]=nv;

	printf("\n============answer============\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	
}

