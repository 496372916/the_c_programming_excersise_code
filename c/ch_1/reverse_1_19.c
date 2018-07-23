#include <stdio.h>
#define MAXIMUM 1000

int get_input(char input[], int maximum);
void reverse(char c[],int length,  char re_c[]);

int main()
{
	char c[MAXIMUM];
	int length;
				    
	// get input string and length of string 
	length = get_input(c, MAXIMUM);
	// declare reverse char array according to length
	char rc[length];
	// reverse c, result in rc
	reverse(c, length, rc);
	// print rc
	printf("%s\n",rc);
	return 0;
}

// get input
int get_input(char c[], int l)
{
	int i,length;
	char ch;
				    
	length = 0;
	for(i=0;(ch=getchar())!='\n' && ch!=EOF;i++)
	{
		c[i] = ch;
														        
	}
	c[i] = '\0';
	length = i;
	return length;
																				    
}

// reverse the string
void reverse(char c[], int length, char rc[])
{
	int i;
	for(i=0;c[i] !='\0';i++)
	{
		rc[length-i-1] = c[i];
											        
	}
}
