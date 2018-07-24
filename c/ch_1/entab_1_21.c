#include <stdio.h>
#define MAXIMUM 1000
// getchar()那里有问题

int get_input(char c[],int length);
void entab(char c[], int space_nums, char rc[]);

int main()
{
    int length, space_nums;
    char c[MAXIMUM], rc[MAXIMUM];
    
    length = get_input(c, MAXIMUM);
    
    space_nums = 2;
    // entab
    entab(c, space_nums, rc);
    // printf("\n%s",c);
	printf("\n%s\n",rc);
}

int get_input(char c[], int length)
{
    int i;
	char ch;
    
    
    for(i=0;(ch=getchar())!=EOF && i < length; i++)
    {   
		c[i] = ch;
		// printf("%c",ch);
	}
	printf("\n%s",c);
    
    if(i < length)
        c[i] = '\0';
    return i;
}

// entab
void entab(char c[], int space_nums, char rc[])
{
    int i, j, k, count;
    
    count = 0;
    j = 0;
    
    for(i=0; c[i]!='\0';i++ )
    {
        if(c[i]!=' ')
        {
            for(k=0;k<count;k++)
            {
                rc[j] = ' ';
                j++;
            }
            count = 0;
            rc[j] = c[i];
            j++;
            continue;
        }
        count++;
        if(count == space_nums)
        {
            rc[j] = '\t';
            j++;
            count = 0;
        }
    }
}
