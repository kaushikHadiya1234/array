#include<stdio.h>
main()
{
	char a[100],ch;
	int i,n,j,count=0;
	
	printf("enter the string : ");
	gets(a);
	
	n = strlen(a);

	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]='\0';
			}
		}
		
	}
	
	if(a[i]!='\0' && a[i]!=' ')
	{
		printf("%c = %d\n",a[i],count);
		printf("%d = %d\n",a[i],count);
	}
	

}