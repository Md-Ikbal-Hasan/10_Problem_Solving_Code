#include <stdio.h>
int main()
{
    char s1[100], s2[100];
    int  i, j;

    printf("Enter first string: ");
   gets(s1);

    printf("Enter second string: ");
   gets(s2);


    for(i = 0; s1[i] != '\0'; ++i);

    for(j = 0; s2[j] != '\0'; ++j, ++i)
    {
        s1[i] = s2[j];
    }

    s1[i] = '\0';
    printf("After concatenation: %s", s1);

    return 0;
}
