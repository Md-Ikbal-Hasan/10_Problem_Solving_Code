#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter the first string :");
    gets(str1);
    printf("Enter the second string :");
    gets(str2);
    strcat(str1,str2);
   puts(str1);
    puts(str2);
   return 0;
}
