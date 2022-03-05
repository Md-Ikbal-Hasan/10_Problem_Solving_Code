#include<stdio.h>
int main()
{
    char str[100],ch;

    int i,word;
    printf("Enter a string : ");
    gets(str);
     i=word=0;
     while((ch=str[i])!='\0')
     {

     if(ch==' ')
        word++;

    i++;
     }
     word++;

    printf("Number of word: %d\n",word);
}



