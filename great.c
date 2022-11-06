#include<stdio.h>
main()
{
	float A,B,C;
	scanf("%f %f %f",&A,&B,&C);
	if((A>B)&&(A>C))
		printf("Marks wins");
	else if(B>C)
		printf("bob wins");
	else
		printf("jack wins");
}
