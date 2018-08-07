#include <stdio.h>

void my_expand(char s1[], char s2[]);

int main()
{
    char s1[] = "-aa-z-a,b-m0-9a-b-c-2";
    char s2[100];
    
    my_expand(s1,s2);
    printf("s1 is %s,\ns2 is %s。\n",s1,s2);
    
    return 0;
}
// expand: copy s1 to s2 while convert shorthand to complete one
void my_expand(char s1[], char s2[])
{
    int i, j, k, flag;
    char ch;
    j = 0;
    
    for(i=0;(ch=s1[i])!='\0'&&s1[i+2]!='\0';i++)
    {
        s2[j++] = ch;
        flag = 0;
        if (s1[i+1] == '-')
        {
            if(ch>='0'&&ch<='9')
                if(s1[i+2]>=ch && s1[i+2]<='9')
                    for(k=1;k<s1[i+2]-ch;k++)
                        s2[j++] = ch+k;
                else
                    continue;
            else if(ch>='a'&&ch<='z')
                if(s1[i+2]>=ch&& s1[i+2]<='z')
                    for(k=1;k<s1[i+2]-ch;k++)
                        s2[j++] = ch+k;
				else
					continue;
			else
				continue;

            flag = 1;
        }
        else
            continue;
        if(flag)
			i++;
    }
	s2[j++] = ch;
	printf("ch = %c,s2[j-1]=%c\n",ch,s2[j-1]);
	s2[j++] = s1[i+1];
	printf("s1[i+1]=%c\n",s1[i+1]);
	s2[j++] = '\0';

	printf("flag is %d\n",flag);
      
}
