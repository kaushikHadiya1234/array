#include<stdio.h>
main()
{
	char a[100];
	int i,n,count=0,vow=0;
	
	printf("enter the string : ");
	gets(a);
	
	n = strlen(a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]=='A'||a[i]=='E'||a[i]== 'I' ||a[i]=='O'||a[i]=='U' ||a[i]=='a'||a[i]=='e'|| a[i]=='i' ||a[i]=='o'||a[i]=='u')
		{
			vow++;
		}
		else
		{
			count++;
		}
	}
	
	printf("vowels is  = %d\n",vow);
	printf("constance is = %d ",count);
	
	
	
	
}
