#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
    unsigned x, y, result;
    int p, n;
    
    // 10:1010 5:101 1110
    x = 10;
    y = 5;
    p =2;
    n = 1;
    
    result = setbits(x, p, n, y);
    printf("x=%u,y=%u,setbits result=%u\n",x,y,result);    
 	
    // 10:1010 5:101 1101 
    x = 10;
    y = 5;
    p = 2;
    n = 3;
    
    result = setbits(x, p, n, y);
    printf("x=%u,y=%u,setbits result=%u\n",x,y,result);    
	return 0;
    
}
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    int k;
	k = p + 1 - n;
	// 构造x除替换位为0外，其余均不变
	// 构造y，左移k位，位置对准后,前面的都变为1，替换后面的也为1，中间的不变
	return (~(~0 << n)<<k |x) &((~0<<(1+p)|y<<k)|(~(~0<<k)));
}
