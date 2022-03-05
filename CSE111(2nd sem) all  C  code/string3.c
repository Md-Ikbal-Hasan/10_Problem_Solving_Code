#include<stdio.h>
int main()
{
    char str[100],ch;

    int i,vowel,consonant,digit,space,other;
    printf("Enter a string : ");
    gets(str);
     i=vowel=consonant=digit=space=other=0;
     while((ch=str[i])!='\0')
     {
       if
        (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
          ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')


        vowel++;


    else if(ch>='a' && ch<='z'||ch>='A' && ch<='Z')
        consonant++;
    else if(ch>='0' &&ch<='9')
        digit++;
    else if(ch==' ')
        space++;
    else
        other++;
    i++;
     }
    printf("Number of vowel : %d\n",vowel);
    printf("Number of consonant : %d\n",consonant);
    printf("Number of space : %d\n",space);
    printf("Number of digit : %d\n",digit);
    printf("Number of other : %d\n",other);
}
