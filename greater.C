#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	
	printf("\nenter the numbers\n");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y&&x>z)
		
		printf("\n %d is greatest",x);
		
	else if(y>z)
	
		printf("\n %d is greatest",y);
		
	else
	
		printf("\n %d is greatest",z);
		
}	 

