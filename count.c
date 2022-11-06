#include <stdio.h>
#include <math.h> /* Used for log10() */

int main()
{
    float j;
    float count = 0;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%f", &j);

    /* Calculate total digits */
    count = log10(j) + 1;

    printf("Total digits: %f", count);

    return 0;
}
