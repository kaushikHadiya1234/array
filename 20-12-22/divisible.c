#include<stdio.h>
#include<string.h>
int divi(int a);
main()
{
	int no;
	 
	printf("enter the no : ");
	scanf("%d",&no);
	
	divi(no);
 	if(no%3==0 && no%5==0)

	{
		printf("both are divisible\n ");
	}	
	else if(no%3==0)
	{
		printf("divisible for 3\n");
	}
	else if(no%5==0)
	{
		printf("divisible for 5\n");
	}
	else
	{
		printf("both are not divisible");
	}
	

}


int divi(int a)
{

}
