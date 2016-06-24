#include<stdio.h>
#include<conio.h>
int main()
{
	int n,x=0,a=1,i,t;
	
	printf("\n Enter the number\n");
	scanf("%d",&n);
	printf("\n the fibonacci series are \n");
	for(i=0;i<n;i++)
	{
		x=x+a;
	
		printf("\n%d\n",x);
		
		t=x;
		x=a;
		a=t;
	}
}

