#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void i2a_v3(int n, char s[], int width);
void reverse_v2(char s[], int width);

int main()
{
    int n;
    char s[20];
    int width;
 
 	n = 30;
    for(width = 0;width<10;width++)
    {
        i2a_v3(n, s, width);
        printf("n=%d convert string is %s, width = %d\n", n, s, width);
    }
	
 	n = -30;
    for(width = 0;width<10;width++)
    {
        i2a_v3(n, s, width);
        printf("n=%d convert string is %s, width = %d\n", n, s, width);
    }
    return 0;
}
// i2a_v3: third parameter width padded with blanks when length of s < width
void i2a_v3(int n, char s[], int width)
{
    int sign;
    int i;
    
    sign = n;
    if(sign<0)
        n = -n;
    i = 0;
    do
    {
        s[i++] = n%10 + '0';
    }while(n/=10);
    
	if(sign<0)
		s[i++] = '-';

    s[i] = '\0';
    //printf("s is %s\n", s);
    reverse_v2(s, width);
}
// reverse_v2: reverse s  padded with blanks when length of s < width
void reverse_v2(char s[], int width)
{
    int i, length;
    char ch;
    
    length = strlen(s);
    // printf("length=%d\n",length);
	i = 0;
   
    if(length < width)
    {   
        for(i=length;i<width;i++)
            s[i] = ' ';
		length = width;
		s[i] = '\0';
    }
	printf("s is %s\n",s);
    for(i=0;i<length-i;i++)
    {
        ch = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = ch; 
    }
	
    
}
