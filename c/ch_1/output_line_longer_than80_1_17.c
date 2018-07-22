#include <stdio.h>
#define MAXLINE 1000 // maximum input lines length

int getlinein(char line[],int linenum[], int maxline);

// print the line whose length is  longger than 80
int main()
{
	int len; // input   length
	int min = 5; // min output line length
	char line[MAXLINE]; // input string
	int linelen[MAXLINE]; // line length
    int i,j;  
	int start,end; // every line start and end position
	start = 0;
	end = 0;
	len = getlinein(line,linelen, MAXLINE); // input length
	// output according to line
	for(i=0; linelen[i]!=0; i++)
	{
		if (linelen[i] > min)
		{
			end = start + linelen[i];
			for (j=start-1;j<end;j++)
				printf("%c",line[j]);
		}

		start +=linelen[i];
	}
		
	return 0;

}
int  getlinein(char line[],int linelen[], int length)
{
	int c, i, linenums,  linelength;

	linelength = 0;
	linenums = 0;
	for (i=0; i < length-1 && (c=getchar())!=EOF; ++i)
	{
		line[i] = c;
		linelength++;
		if (c == '\n')
		{	linelen[linenums] = linelength;
			linenums++;
			linelength = 0;
		}
	}
			
	line[i] = '\0';
	linelen[linenums] = 0;
	return i;

}
