#include<stdio.h>
int add(int,int);//function declaration
main()
{
int x,y,z;
scanf("%d %d",&x,&y);
z=add(x,y);
printf("%d",z);	
}

int add(int a,int b)//function definition
{
int c;
c=a+b;
return c;	
}
