#include <string.h>
int main()
{
    char s[1000];
    int a,words=0;

    printf("Enter  the string : ");
    gets(s);

    for(a=0;s[a];a++)
    {
    	if(s[a]==32)
    	 words++;

 	}
 	if(a>0)
 	 words++;



    printf("no of words in string = %d\n",words);

    return 0;
}
