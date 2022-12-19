#include<stdio.h>
main()
{
	char a[100];
	int i,n;
	
	printf("enter the string : ");
	gets(a);
	
	printf("\n=======upper======\n");
	
	for(i=0;i<=a[i];i++)
   {
	   if(a[i]>='a'&& a[i]<='z')
	   {
	   	   a[i]-=32;
       }
      else if(a[i]>='A'&& a[i]<='Z')
	    {
	   	   a[i]=a[i];
        }
 }
   
   printf("\n=========\n togal %s",a);
   
   	
	printf("\n=======lower======\n");
	
	for(i=0;i<=a[i];i++)
    {
	   if(a[i]>='A'&& a[i]<='Z')
	    {
	   	   a[i]+=32;
        }
   
    }


   printf("\n=========\n togal %s",a);

}
