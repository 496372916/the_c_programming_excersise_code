#include <stdio.h>
#include <time.h>
#define MAXIMUM 20000
#define LOOP_COUNT 1000000

int binsearch(int nums[], int num , int length ); // original functino
int binsearch2(int nums2[], int num2, int length2); // new function

int main()
{
    int nums[MAXIMUM]; 
    // the num found
    int num = 10;
    // index of num in nums[]
    int index;
    int i;
    // 时间变量
    clock_t time_taken;
    
    // 构造初始int[]
    for(i=0;i<MAXIMUM;i++)
        nums[i] = i;
    
    // 多次循环二分查找法，记录时间
    for(i=0,time_taken = clock();i<LOOP_COUNT;i++)
        index = binsearch(nums, num, MAXIMUM);
    // 时间变量赋值减去原来的值
    time_taken = clock() - time_taken;
    
    // 判断返回的结果
    if (index == -1)
        printf("there is not found  %d \n", num);
    else
        printf("the index of %d is %d\n", num, index);
    // 输出第一种方式消耗的时间
    printf("the time of first binsearch is %lu clocks\n", (unsigned long) time_taken);
    
    // 多次循环二分查找法，记录时间
    for(i=0,time_taken = clock();i<LOOP_COUNT;i++)
        index = binsearch2(nums, num, MAXIMUM);
    // 时间变量赋值减去原来的值
    time_taken = clock() - time_taken;
    // 判断返回的结果
    if (index == -1)
        printf("there is not found  %d \n", num);
    else
        printf("the index of %d is %d\n", num, index);
    // 输出第二种方式消耗的时间
    printf("the time of second binsearch is %lu clocks\n", (unsigned long) time_taken);
    
    return 0;
}

// binsearch1: find x in v[0]<=v[1]<=...<=v[n-1]
int binsearch(int nums[], int num, int length)
{
    int low, high, middle;
    
    low = 0;
    high = length -1;
    
    while(low<=high)
    {
        middle = (low+high)/2;
        if(num < nums[middle])
            high = middle-1;
        else if(num > nums[middle])
            low = middle+1;
        else
            return middle;
            
        
    }
    
    return -1;
}

// binsearch2: find x in in v[0]<=v[1]<=...<=v[n-1]
int binsearch2(int nums[], int num, int length)
{
    int low, high, middle;
    
    low = 0;
    high = length -1;
    middle = (low+high)/2;
    while(low<=high && num != nums[middle])
    {
        if(num < nums[middle])
            high = middle-1;
        else if(num > nums[middle])
            low = middle+1;
        middle = (low+high)/2;
    }
    if (num == nums[middle])
        return middle;
    return -1;
}
