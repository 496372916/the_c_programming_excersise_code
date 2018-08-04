#include <stdio.h>
#define  MAXIMUM 1000

int get_input(char in[]);
void lower(char in[], int length);

int main()
{
    char in[MAXIMUM];
    int length;
    
    length = get_input(in);
    printf("\nbefore lower the string is %s\n", in);
    
    lower(in, length);
    printf("after lower the string is %s\n", in);
    
    return 0;
}

// get_input: get user input string
int get_input(char s[])
{
    int i;
    char ch;
    
    for(i=0;(ch=getchar())!=EOF;i++)
        s[i] = ch;
    s[i] = '\0';
    
    return i;
}

// lower: convert upper case letters to lower one
void lower(char s[], int length)
{
    int i;
    for(i=0;i<length;i++)
        s[i] = s[i]>='A'&& s[i]<='Z' ? s[i] + 'a' - 'A' : s[i];
}
