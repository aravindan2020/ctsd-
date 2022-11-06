#include <stdio.h>
int main()
{
    int age;
	char name[30];
	char temp;
	
	printf("Enter age: ");
	scanf("%d",&age);
	printf("Enter name: ");
	scanf("%c",&temp); // temp statement to clear buffer
	fgets(name,30,stdin);	
	printf("age is: %d\n",age);
	fputs(name,stdout);
	return 0;
}
