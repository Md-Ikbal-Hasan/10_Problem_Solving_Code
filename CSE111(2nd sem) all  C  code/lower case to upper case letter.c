#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lower case letter:");
    scanf("%c",&lower);
    printf("The upper case letter is:%c",lower-32);
}
