#include<stdio.h>
main()
{
	int count0 = 0, count1 = 0,N=4;
    // Iterate through all the bits
    while (N > 0) {
        // If current bit is 1
        if (N & 1) {
            count1++;
        }
        // If current bit is 0
        else {
            count0++;
        }
        N = N >> 1;
    }
    // Print the count
    printf("Count of 0s in N is %d\n", count0);
    printf("Count of 1s in N is %d\n", count1);
}
