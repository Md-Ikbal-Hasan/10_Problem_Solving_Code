#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    strrev(str);
    printf("%s",str);
    return 0;
}
