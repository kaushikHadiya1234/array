#include<stdio.h>
void interest(int p,float r,float n);
main()
{
	int p;
	float r,n;
	interest(p, r,n);
}

void interest(int p,float r,float n)
{
	float interest; 
	
	printf("enter the value of  p & r & n");
	scanf("%d%f%f",&p,&r,&n);
	
	interest = p*r*n/100;
	
	printf("rate of interest = %f",interest);
}