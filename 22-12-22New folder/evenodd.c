#include<stdio.h>
int number(int a);
main()
{
	int a,n;
	
	printf("enter the value of a : ");
	scanf("%d",&a);
	
	n = number(a);
	if(n%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}

int number(int a)
{
	return a;
}