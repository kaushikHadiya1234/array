#include<stdio.h>
main()
{
	char a[100];
	int i,n,count=0,num=0;
	
	printf("enter the string : ");
	gets(a);
	
	n = strlen(a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]>='a'&& a[i]<='z' || a[i]>='A' && a[i]<='Z')
		{
			count++;
		}
		if(a[i]>='0' && a[i]<='9')
		{
			num++;
		}
	}
	
	printf("alphabet is  = %d\n",count);
	printf("number is = %d ",num);
	
	
	
	
}
