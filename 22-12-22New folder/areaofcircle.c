#include<stdio.h>
void circle(float r);
main()
{
	float r;
	circle(r);
}

void circle(float r)
{
	const float pie=3.14;
	float area;
	
	printf("enter the value of r : ");
	scanf("%f",&r);
	
	area = pie*r*r;
	
	printf("area of circle = %f",area);
	
}