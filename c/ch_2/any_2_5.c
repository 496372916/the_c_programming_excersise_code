#include <stdio.h>

int any(char s1[], char s2[]);

int main()
{
	char s1[] = "123333334444abc";
	char s2[] = "3";
	char s3[] = "d";
	int pos;
	pos = any(s1,s2);
	
	printf("s1 is %s,s2 is %s, position si %d\n",s1,s2,pos);
	pos = any(s1,s3);
	printf("s1 is %s,s3 is %s, position si %d\n",s1,s3,pos);

	return 0;

}

/* any : return the first location in a string s1
 where any character from the string s2 occurs, or -1 if no
 location from 0 begins */
int any(char s1[],char s2[])
{
    int i, j;
    
    for(i=0;s2[i]!='\0';i++)
        for(j=0;s1[j]!='\0';j++)
            if(s2[i] == s1[j])
                return j;
    return -1;
    
}
