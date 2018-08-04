#include <stdio.h>

int bitcount(unsigned x);

int main()
{
	unsigned x;

	x = 20;
	printf("the nums of 1 of %u is %d\n",x, bitcount(x));

}
// bitcount: counts the number of 1-bits in its integer
int bitcount(unsigned x)
{
    int b;
    b = 0;
    while(x)
    {
        b++;
        x &= x-1;
    }
    
    return b;
}
