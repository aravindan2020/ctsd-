#include<stdio.h>
#include<math.h>

int main()
{
    float degree, radian;

    printf("Enter angle in Degrees\n");
    scanf("%f", &degree);

    radian = degree * ( M_PI / 180.0 );

    printf("Angle in Radian is %f\n", radian);

    return 0;
}
