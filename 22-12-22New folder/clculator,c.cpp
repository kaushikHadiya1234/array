#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
void malti(int a,int b);
void divi(int a,int b);
main()
{
	int a,b;
	add(a,b);


}

void add(int a,int b)
{

	int c;
	printf("enter the value of a & b");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	printf("add = %d\n",c);
	printf("sub =");
	sub(a,b);
	printf("malti =");
	malti(a,b);
	printf("divi =");
	divi(a,b);
}/*
void sub(int a,int b)
{
	int c;
	c=a-b;
	printf("%d\n",c);
	
}
void malti(int a,int b)
{
	int c;
	c=a*b;
	printf("%d\n",c);
	
}
void divi(int a,int b)
{
	int c;
	c=a/b;
	printf("%d",c);
	
}