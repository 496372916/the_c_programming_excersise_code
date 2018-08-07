#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void i2b(int n, char s[], int b);
void reverse(char s[]);

int main()
{
    // nums to converted
    int n; 
    // base
    int b;
    // character of converted nums
    char s[20];
    
    n = 30;
    for(b=2;b<21;b++)
    {
       i2b(n, s, b);
       printf("n=%d convert to base of %d is %s\n", n, b, s); 
    }
    
    return 0;
}
// i2b: convert n to string base of b
void i2b(int n, char s[], int b)
{
    int i,sign;
    
    sign = n;
    if(sign<0)
        n = -n;
    
    i = 0;
    do
    {
        if(n%b<10)
            s[i++] = n % b + '0';
        else
            s[i++] = n % b + 'A' - 10;
    }while(n/=b);
    if (sign<0)
        s[i++] = '-';
    s[i] = '\0';
    
    reverse(s);
}
// reverse: reverse the string
void reverse(char s[])
{
    int i,length;
    char ch;
    
    length = strlen(s)-1;
    for(i=0;i<length-i;i++)
    {
        ch = s[i];
        s[i] = s[length-i];
        s[length-i] = ch;
    }
}
