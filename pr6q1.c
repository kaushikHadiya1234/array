#include<stdio.h>
main()
{
	char a[100];
	int i,n;
	
	printf("enter the string : ");
	gets(a);
	
	for(i=0;i<=a[i];i++)
   {
	   if(a[i]>='a'&& a[i]<='z')
	   {
	   	   a[i]-=32;
	   	   
	   	   
	   }
	   else if(a[i]>='A'&& a[i]<='Z')
	   {
	   	   a[i]+=32;
	   }
   }
   
   printf("\n=========\n togal %s",a);
}