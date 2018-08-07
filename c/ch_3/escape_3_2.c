#include <stdio.h>

// 非打印字符转为可见字符
void escape(char s[], char t[]);
// 可见非打印字符转为实际字符
void anti_escape(char s2[], char t2[]);

int main()
{
    char s[] = "i'm\t\nabc\t222\n\\ad";
    char t[30] = "";
    
    // before escape
    printf("before escape the string is %s\n", s);
    // after escape
    escape(s, t);
    printf("after escape the string is %s\n", t);
    
    
	//after anti_escape
    anti_escape(t, s);
    printf("after anti_escape the string is %s\n", s);
   
    return 0;
}
// escape: convert \n \t to visible \n \t
void escape(char s[], char t[])
{
    int i,j;
    char ch;
    
    j = 0;
    
    for(i=0;(ch=s[i])!='\0';i++)
    {
        switch(ch)
        {
            case '\n':
			{
				t[j++] = '\\';
				t[j++] = 'n';
				break;
			}
            case '\t':
            {
                t[j++] = '\\';
                t[j++] = 't';
				break;
            }
            default:
            {    
				t[j++]=ch;
				break;
			}
        }
        
    }
}
void anti_escape(char s[], char t[])
{
    int i,j;
    char ch;
    
    j=0;
    
    for(i=0;(ch=s[i])!='\0' && s[i+1]!='\0';i++)
    {
        if(ch == '\\')
            switch(s[i+1])
            {
                case 'n':
                    t[j++] = '\n';
                    i++;
                    break;
                case 't':
                    t[j++] = '\t';
                    i++;
                    break;
                default:
                    t[j++] = ch;
            }
        else
            t[j++] = ch;
    }
    
}
