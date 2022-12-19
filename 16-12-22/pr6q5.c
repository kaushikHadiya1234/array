#include<stdio.h>
#include<string.h>

main()
{
	char a[100],b[100];
	int l[100];
	int i,j,n,count=0,len=0,start=0,min=0;
	
	printf("enter the string : ");
	gets(a);
	
	n = strlen(a);
	
	for(i=0;i<=n;i++)
	{
		if(a[i]!=' '&&a[i]!='\0')
	    {
		len++;
	}
	else if(i==n-1)
	{
		l[count]=len;
		count++;
		len=0;
	}
	else
	{
		l[count]=len;
		count++;
		len=0;
	}

   }
   
   printf("\n=========number of word ===========%d\n",count);
   
   for(i=0;i<count;i++)
   {
   	    printf("%d\n",l[i]);
   }
   
   min=a[0];
    
   for(i=0;i<count;i++)
   {
   	   	if(a[i]<=min)
		{
		    min=a[i];
		}
   }
   
   printf("minimum lenth of word = %d",min);
   
}
