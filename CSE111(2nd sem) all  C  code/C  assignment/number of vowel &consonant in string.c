#include<stdio.h>
int main()
{
    char str[100],ch;

    int i,vowel,consonant;
    printf("Enter a string : ");
    gets(str);
     i=vowel=consonant=0;
     while((ch=str[i])!='\0')
     {
       if
        (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
          ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')

{
    vowel++;
}


    else if(ch>='a' && ch<='z'||ch>='A' && ch<='Z')
        consonant++;
     i++;
     }

     printf("Number of vowel:%d\n",vowel);
     printf("Number of consonant:%d",consonant);


return 0;}
