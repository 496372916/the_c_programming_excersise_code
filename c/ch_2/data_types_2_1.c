#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("the charbit%d\n",CHAR_BIT);
	// limits.h 常量输出char int short long 的signed unsigned 最大最小值
	// char unsigned max and min
	printf("the max unsigned char value is %u\n",CHAR_MAX);
	//printf("the min unsigned char value is %d\n",CHAR_MIN);
	// char signed max and min
	printf("the max signed char value is %d\n",SCHAR_MAX);
	printf("the min signed char value is %d\n",SCHAR_MIN);
	// short unsigned max and min 
	printf("the max unsigned short value is %u\n",USHRT_MAX);
	//printf("the min unsigned short value is %d\n",USHRT_MIN);
	// short signed max and min 
	printf("the max signed short value is %d\n",SHRT_MAX);
	printf("the min signed short value is %d\n",SHRT_MIN);
	// int unsigned max and min
	printf("the max unsigned int  value is %u\n",UINT_MAX);
	// printf("the min unsigned int  value is %d\n",UINT_MIN);
	// int signed max and min
	printf("the max signed int  value is %d\n",INT_MAX);
	printf("the min signed int  value is %d\n",INT_MIN);
	// long unsigned max and min
	printf("the max unsigned long  value is %lu\n",ULONG_MAX);
	// printf("the min unsigned long  value is %d\n",ULONG_MIN);
	// long signed max and min
	printf("the max signed long  value is %ld\n",LONG_MAX);
	printf("the min signed long  value is %ld\n",LONG_MIN);
    
	printf("采用直接计算的方式计算最大最小值:\n");
	// signed types
	// signed char max and min
	printf("the max signed char value is %d\n",(char)(((unsigned char)~0)>>1));
	printf("the min signed char value is %d\n",-(char)(((unsigned char)~0)>>1)-1);
	// signed short max and min
	printf("the max signed short value is %d\n",(short)(((unsigned short)~0)>>1));
	printf("the min signed short value is %d\n",-(short)(((unsigned short)~0)>>1)-1);
	// signed int max and min
	printf("the max signed int value is %d\n",(int)(((unsigned int)~0)>>1));
	printf("the min signed int value is %d\n",-(int)(((unsigned int)~0)>>1)-1);
	// signed long max and min
	printf("the max signed long value is %ld\n",(long)(((unsigned long)~0)>>1));
	printf("the min signed long value is %ld\n",-(long)(((unsigned long)~0)>>1)-1);
	
	// unsigned types
	// unsigned char max
	printf("the max unsigned char value is %u\n",(unsigned char)~0);
	// unsigned short max
	printf("the max unsigned short value is %u\n",(unsigned short)~0);
	// unsigned int  max
	printf("the max unsigned int value is %u\n",(unsigned int)~0);
	// unsigned long  max
	printf("the max unsigned long value is %lu\n",(unsigned long)~0);




}
