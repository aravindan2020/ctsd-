#include<stdio.h>
main()
{
	//array 
	int i,n,x;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to search");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("element no %d id found in the index %d",a[i],i);
			break;
		}
	}
}
