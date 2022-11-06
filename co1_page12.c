#include<stdio.h>
main()
{
	int n,k,m=84,a;
	printf("enter the no of friends going to reg in the course");
	scanf("%d",&n);
	printf("enter the total no of reg students ");
	scanf("%d",&k);
	a=m-k;
	if(n<=a)
	{
		printf("%d member can join",n);
	}
	else
	{
		printf("not available");
	}	
}
