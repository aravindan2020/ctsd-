#include <stdio.h>
int main()
{
    int age;
	char name[30];
	
	printf("Enter age: ");
	scanf("%d",&age);
	printf("Enter name: ");
	scanf("%[^\n]",name);
	
	printf("Name is: %s, age is: %d\n",name,age);
	return 0;
}
