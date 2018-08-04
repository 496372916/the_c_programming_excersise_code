#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
	// all same
	char s1[] = "123234455";
	char s2[] = "23415";
	// no same
	char s3[] = "abcdefg";
	// some same
	char s4[] = "9862322287";
	// before
	printf("before squeeze s1 is %s,s2 is %s\n",s1,s2);
	squeeze(s1,s2);
	// after
	printf("after squeeze s1 is %s,s2 is %s\n",s1,s2);
	// before
	printf("before squeeze s3 is %s,s2 is %s\n",s3,s2);
	squeeze(s3,s2);
	// after
	printf("after squeeze s3 is %s,s2 is %s\n",s3,s2);
	// before
	printf("before squeeze s4 is %s,s2 is %s\n",s4,s2);
	squeeze(s4,s2);
	// after
	printf("after squeeze s4 is %s,s2 is %s\n",s4,s2);
	
	return 0;


}

/* squeeze: delete each character in s1 that matches any character in string s2 */
void squeeze(char s1[],char s2[])
{
    int i,j,k,flag;
    
    for(i=j=0;s1[i]!='\0';i++)
    {
        flag = 0;
        for(k=0;s2[k]!='\0';k++)
        
            if(s1[i] == s2[k])
            {
                flag =1;
                break;
            }
        if (flag == 1)
            continue;
        s1[j++] = s1[i];
        
    }
    s1[j] = '\0';
    
}
