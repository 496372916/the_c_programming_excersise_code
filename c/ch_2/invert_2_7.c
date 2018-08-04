#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned invert(unsigned x, int p, int n);

int main()
{
    unsigned x;
    unsigned y;
    int p, n;
    
    // first 
    x = 10;
    p = 3;
    n = 2;
    y = invert(x, p, n);
    printf("x=%u,p=%d,n=%d after invert is %u\n", x, p, n, y);
    
    // second
    x = 10;
    p =2 ;
    n = 2;
    y= invert(x, p, n);
    printf("x=%u,p=%d,n=%d after invert is %u\n", x, p, n, y);
	return 0;
    
}

// invert: return x with the n bits thar begin position p inverted
unsigned invert(unsigned x, int p, int n)
{
    unsigned y, z;
    
    // 获得n位数
    y = getbits(x, p, n);
    // printf("n 位数是%u\n",y);
	// 构造取反数据
    z = ~(~0<<n)^y;
    // printf("对其进行取反是%u\n",z);

    // 进行替换
    return setbits(x, p, n, z);
}

// getbits: get n bits from position p 
unsigned getbits(unsigned x, int p, int n)
{
    return (x>>(p+1-n)) & ~(~0<<n);
}

// setbits: return x with the n bits that begin position p inverted 
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    int k;
	k = p + 1 -n;
    //return (~(~0 << n)<<k |x)&(((~0<<k|y<<k))|(~(~0<<k)));
	 return (((~(~0 << n))<<k |x)) &((((~0<<(p+1)|y<<k))|(~(~0<<k))));
}
