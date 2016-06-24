#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0,a=1,i,temp;
	
	printf("\n Enter the number\n");
	scanf("%d",&n);
	printf("\n the fibonacci series are \n");
	for(i=0;i<n;i++)
	{
		sum=sum+a;
	
		printf("\n%d\n",sum);
		
		temp=sum;
		sum=a;
		a=temp;
	}
}

