#include<stdio.h>
#include<string.h>
main()
{
	int n;
	char s1[100],s2[100],s3[100];
	printf("Enter string 1: ");
    scanf("%s",&s1);
    printf("Enter string 2: ");
    scanf("%s",&s2);
    while(1)
    {
    printf("\n1.string length\n 2.string compare\n 3.concatenation\n4.string copy\n5.String reverse\n6.exit\n");
    scanf("%d",&n); 
    switch(n)
    {
    	case 1:
    		printf("***string length***\n");
    		printf("%d\n",strlen(s1));
    		printf("%d\n",strlen(s2));
    	break;
		
		case 2:
			printf("***string comparison***\n");
			printf("%d",strcmp(s1,s2));
		break;
		case 3:
			printf("***string concatentation***\n");
			printf("%s",strcat(s1, s2));
		break;
		case 4:
			printf("***string copy***\n");
			printf("%s",strcpy(s1,s2));
		case 5:
			printf("***string reverse***\n");
			printf("%s",strrev(s2));
		case 6:
			exit(0);			
		break;	
}
}
}

