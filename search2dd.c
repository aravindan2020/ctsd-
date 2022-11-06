#include<stdio.h>
main()
{
	int i,j,r,c,s;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the element to search");
	scanf("%d",&s);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==s)
			{
				printf("element is found at %d,%d",i,j);
			}
}
}
}
