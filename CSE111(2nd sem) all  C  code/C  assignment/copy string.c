#include <stdio.h>
int main()
{
    char s1[100], s2[100];

    printf("Enter string s1: ");
    gets(s1);
    printf("Enter string s1: ");
    gets(s2);


   strcpy(s1,s2);


    printf("String s1: %s\n", s1);
    printf("String s2:%s",s2);

    return 0;
}
