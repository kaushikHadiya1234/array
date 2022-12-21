#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int malti(int a,int b);
int divi(int a,int b);
int module(int a,int b);
main()
{
	int i=1,a,b,n,k;
	char s,y;
	
	
/*	printf("enter your choice :");
	scanf("%d",&p);
*/	
	
	do
	{
    	printf("press 1 for add\n");
	    printf("press 2 for sub\n");
     	printf("press 3 for malti\n");
     	printf("press 4 for divi\n");
	    printf("press 5 for module\n");
	     
		printf("enter the value of k : ");
		scanf("%d",&k);
   
		switch(k)
		{
			case 1 :
				add(a,b);
				break;
				
			case 2 :
				sub(a,b);
				break;
				
			case 3 :
				malti(a,b);
				break;
				
			case 4 :
				divi(a,b);
				break;
				
			case 5 :
				module(a,b);
				break;				
		}
		printf("press y for continue\n");
		printf("press N for leave\n");
		
		printf("enter the next step : ");
		scanf(" %c",&s);
		
	 }
    while(s=='Y' || s=='y');	
	
}

int add(int a,int b)
{
	int c;
	printf("enter the value of qa &b : ");
	scanf("%d%d",&a,&b);
		c=a+b;
	printf("%d\n",c);
	
}
int sub(int a,int b)
{
	int c;
	printf("enter the value of qa &b : ");
	scanf("%d%d",&a,&b);
		c=a-b;
	printf("%d\n",c);
	
}
int malti(int a,int b)
{
	int c;
	printf("enter the value of qa &b : ");
	scanf("%d%d",&a,&b);
		c=a*b;
	printf("%d\n",c);
	
}
int divi(int a,int b)
{
	int c;
	printf("enter the value of qa &b : ");
	scanf("%d%d",&a,&b);
		c=a/b;
	printf("%d\n",c);
	
}
int module(int a,int b)
{
	int c;
	printf("enter the value of qa &b : ");
	scanf("%d%d",&a,&b);
		c=a%b;
	printf("%d\n",c);
	
}


