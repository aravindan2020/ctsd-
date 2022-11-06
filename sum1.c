#include<stdio.h>
main()
{
	int n,r,s=0;
	scanf("%d",&n);//987
	while(n!=0)//987!=0
	{
		r=n%10;//r=987%10=7
		s=s+r;//s=0+7=7
	    n=n/10;//n=987/10=98
	}
	printf("%d",s);
}
