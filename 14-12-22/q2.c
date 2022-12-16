#include<stdio.h>
#include<stdio.h>
main()
{
	int n,count=0;
	char a[100],b[100];
	
	printf("enter the string");
	gets(a);
	
	n = strlen(a);
	
	b[100]=strcpy(b,a);
	
	strrev(a);
	
	count=strcmp(b,a);

	
	if(count==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	
}
