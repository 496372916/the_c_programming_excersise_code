#include <stdio.h>
#define MAXLINE 1000  /* maxium input line length  */

int getlinenum(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved here */

	max = 0;
	while ((len = getlinenum(line,MAXLINE)) > 0)
		/* get input line length */ 
		if (len > max){
			max = len;
			copy(longest,line);
		}

	// if have a line,print longest one
	if (max > 0 )
		printf("%s",longest);
	return 0;
}

/* getlinenum: read a line into s ,return length  */
int getlinenum(char s[],int lim)
{
	int c,i;
	
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n';++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}

	s[i] = '\0'; /* line end symbol */
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i])!= '\0')
		++i;
}
