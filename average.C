#include<stdio.h>
#include<conio.h>
int main()
{
	float avg,sum=0;
	int a[100],n,i;
	
	printf("\n enter the no. of elements");
	scanf("%d",&n);
	
	printf("\n enter the array elements");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	
	avg=sum/n;
	
	printf("the average is %f",avg);
}
	

