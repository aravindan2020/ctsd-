#include<stdio.h>
main()
{
	 float pi=3.14,r,volume_sphere;
     printf("Enter Radius : ");
     scanf("%f",&r);
     volume_sphere = (4/3)*pi*r*r*r;
     printf("\nVolume of Sphere = %f",volume_sphere);
}
