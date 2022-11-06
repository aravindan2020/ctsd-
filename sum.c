#include<stdio.h>
main()
{
	int n,i,s=0;
	printf("enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("%d",s);
}

