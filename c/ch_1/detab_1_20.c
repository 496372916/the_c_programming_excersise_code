#include <stdio.h>
#define MAXIMUM 1000

int get_input(char c[], int length);
void detab(char c[], int space_nums, char rc[]);

int main()
{
	int length, i;
			    
	char c[MAXIMUM], rc[MAXIMUM];
					    
	// get string input
	length = get_input(c,MAXIMUM);
								    
	// set spaces to one tab
	i = 8;
	// detab
	detab(c, i, rc);
	printf("\n%s\n",rc);
														    
}

// get input string
int get_input(char c[], int length)
{
	int i;
	char ch;
				    
	for(i=0;(ch=getchar())!=EOF && ch != '\n' && i < length;i++)
		c[i] = ch;
	if(i<length)
	// 增加结束标志
		c[i] = '\0';
	return i;
}

// detab
void detab(char c[], int space_nums, char rc[])
{
	int i, j, k, count;
	count = 0;
	k = 0;
	for(i=0;c[i] !='\0'; i++)
	{
		if(c[i] != '\t')
		{
			rc[k] = c[i];
			k++;
			continue;
		}
		count++;
		if(count % 2 == 1)
			for (j = 0;j < space_nums; j++)
			{
				rc[k] = ' ';
			 	k++;
			}
		rc[k] = c[i];
		k++;
	}
}
