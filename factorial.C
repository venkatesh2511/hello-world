#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,fact=1;
	printf("\nEnter the number");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("\nthe factorial is 1");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		
		}
		printf("\n the factorial is %d",fact);
	}
}

