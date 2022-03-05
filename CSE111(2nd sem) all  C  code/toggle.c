#include<stdio.h>
#include<conio.h>

void main()
{
 char str[100];
 int i;

 printf("Please, Enter the String =");

//gets(str);
gets(str);

 for(i=0;str[i]!=NULL;i++)
 {
  if(str[i]>='A'&&str[i]<='Z')
   str[i]+=32;
  else if(str[i]>='a'&&str[i]<='z')
   str[i]-=32;
 }

 printf("\nThe toggle case string is =  %s",str);



}
