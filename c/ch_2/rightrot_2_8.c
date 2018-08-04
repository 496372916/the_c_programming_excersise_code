#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
int getbitnums(unsigned x);
unsigned rightrot(unsigned x, int n);

int main()
{
    unsigned x,y;
    int n;
    
    x = 10;
    n = 3;
    y = rightrot(x, 3);
    printf("befor rightrot x is %u,after %d 位 rightrot x is %u\n", x, n, y);
    
    x = rightrot(y, 3);
    printf("befor rightrot x is %u,after %d 位 rightrot x is %u\n", y, n, x);

	return 0;
}

// rightrot: return value of the int to the right by n positions
unsigned rightrot(unsigned x, int n)
{
    unsigned y;
    int nums;

    y = getbits(x, n-1, n);
    nums = getbitnums(x);
	printf("nums is %d\n",nums);
	printf("x>>n is %u,y<<(nums-n) is %u\n",x>>n,y<<(nums-n));
    return (x>>n) | (y<<(nums-n));
}
// getbits: get n bits from position p
unsigned getbits(unsigned x, int p, int n)
{
    return (x>>(p+1-n)) & ~(~0<<n);
}

// getbitnums: return how many bit of unsigned x
int getbitnums(unsigned x)
{
    int nums;
    nums = 0;
    while(x)
    {
        nums++;
        x = x>>1;
    }
    
    return nums;
}
