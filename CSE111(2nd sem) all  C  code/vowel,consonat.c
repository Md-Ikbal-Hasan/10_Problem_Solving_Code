#include<stdio.h>
int main()
{
    char str[100],ch;

    int i,vowel;
    printf("Enter a string : ");
    gets(str);
     i=vowel=0;
     while((ch=str[i])!='\0')
     {
       if
        (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
        vowel++;
        i++;
     }
    printf("Number of vowel : %d\n",vowel);


}


