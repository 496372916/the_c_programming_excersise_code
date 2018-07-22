#include <stdio.h>
#define MAXIMUM 1000
int get_input(char s[], int line_len[], int length);
int main()
{
    char input[MAXIMUM];
	int line_len[MAXIMUM];
	int length,i, j,k,start,end,nums;
 			    
	// get input string
	length = get_input(input, line_len, MAXIMUM);
	char output[length];
							    
	start = 0;
	k = 0;
	nums = 0;
											    
	// °copy according line
	for(i=0;line_len[i]!= 0; i++)
	{
		end = start + line_len[i];
		for(j=end - 1; j>=start;j--)
			if (input[j]!=' ' && input[j] !='\t' && input[j]!='\n' )
			{
				printf("%c",input[j]);
				break;
			}
		if (j< start)
			continue;
		for(k=start;k<j+1;k++)
		{
			output[nums] = input[k];
			
			printf("new charactor is %c\n",output[nums]);
			nums++;
		}
		if(j < end )
		{	
			
			// nums++;
			if (input[end-1] == '\n')
			{	
				output[nums] = input[end-1];
				nums++;
			}
		}
		start = end;
	}
	printf("%s\n",output);
	return 0;																																	
}

// get input string
int get_input(char s[], int n[], int length)
{
	int i,line_nums, line_length;
	char c;
	line_nums = 0;

	
	for(i=0;(c=getchar())!=EOF && i < length;i++)
	{
		s[i] = c;
		line_length++;
		if (c=='\n')
		{																																	
			n[line_nums] = line_length;
			line_nums++;
			line_length = 0;
		}
	}
		
	s[i] = '\0';	
	n[line_nums] = line_length -1;
	n[line_nums+1] =0;

	return i;
}
