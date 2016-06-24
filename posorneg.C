#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("\n enter the number\n");
	scanf("%d",&n);
	if(n==0)
	{
		printf("\n The number is zero\n");
	}
	else if(n>0)
	{
		printf("\n The number is positive\n");	
	}
	else
	{
		printf("\n The number is negative\n");
	}
}

