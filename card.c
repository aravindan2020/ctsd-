#include<stdio.h>
main()
{
	long int x;
	int y; 
	printf("enter the card number");
	scanf("%ld",&x);
	y=x/10000;
	if(y>=5000&&y<=6000)
	{
		printf("master card");
	}
	else
	{
		printf("visa card");
	}
}
