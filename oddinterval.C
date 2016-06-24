#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i;
	printf("\n enter the first number\n");
	scanf("%d",&a);
	printf("\n enter the last number\n");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		{
			printf("\n%d\n",i);
		}
	}
}

