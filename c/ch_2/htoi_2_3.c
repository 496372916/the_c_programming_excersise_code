#include <stdio.h>

int htoi(char s[]);

int main()
{
	char s[] = "0x897";

	printf("the integer of %s is %d\n",s,htoi(s));
    
	char s2[] = "10";
	printf("the integer of %s is %d\n",s2,htoi(s2));
	return 0;
}


int htoi(char s[])
{
    int n, i;
    n = 0;
    
    
    for(i=0;s[i]!='\0';i++)
    {
        if(i==0 && s[i] =='0')
            continue;
        if (i==1&& (s[i] == 'x'||s[i]=='X'))
            continue;
        if (s[i]>='0'&&s[i]<='9')
            n = n*16 + s[i] - '0';
        if (s[i]>='a'&&s[i]<='f')
            n = n*16 + s[i]- 'a'+10;
        if (s[i]>='A'&&s[i]<='F')
            n = n*16 + s[i]- 'A'+10;
    }
    
    return n;
}
