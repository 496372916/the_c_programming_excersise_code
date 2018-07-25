#include <stdio.h>
#define MAXIMUM 1000

int get_input(char c[],int length);
void fold(char c[], char f[], int length);

int main()
{
	int length, n;

	char c[MAXIMUM],f[MAXIMUM];

	length = get_input(c, MAXIMUM);

	n = 5;
	fold(c,f,n);
	
	printf("\n%s\n",f);
}

// 获得用户输入
int get_input(char c[], int length)
{
	int i;
	char ch;

	for(i=0;(ch=getchar())!=EOF;i++)
		c[i] = ch;
	if(i<length)
		c[i] = '\0';
	return i;
}

// 对用户输入内容进行智能换行
void fold(char c[], char f[], int pos)
{
	int i,j;
	j= 0;

	for(i=0;c[i]!='\0';i++)
	{
		if(i%pos==0 && i!=0)
		{	f[j] = '\n';
			j++;
			f[j] = c[i];
		}
		else
			f[j] = c[i];
		j++;
	}

}
