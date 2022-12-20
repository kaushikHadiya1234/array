#include<stdio.h>
#include<string.h>
int cube(int a);
main()
{
	int no,b;
	
	printf("enter the value of no : ");
	scanf("%d",&no);
	
	b = cube(no);
	printf("%d\n",b);
	
}


int cube(int a)
{
	int b=a*a*a;
	return b;
}
